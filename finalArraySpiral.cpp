#include <iostream>
using namespace std;

int main()
{
    int arr[1000] = {};
    int start = 0;
    int n;
    cout << "Please Enter the value of n : ";
    cin >> n;
    int p = n * n;
    int end = p;

    for (int i = start; i < end; i++)
    {
        arr[i] = i + 1;
    }
    int x = 0;
    int y = 1;
    int prev = n;
    int limit = n / 2;
    int counter = 0;
    int arr2[1000] = {};
    while (x <= limit)
    {
        // Top
        for (int i = start + x; i < start + n + x; i++)
        {
            arr2[i] = counter + 1;
            counter++;
        }

        // Left
        for (int i = start + n + x; i < end - y; i++)
        {
            if (i % prev == prev - y)
            {
                arr2[i] = counter + 1;
                counter++;
            }
        }

        // Bottom
        for (int i = end - y; i > end - y - n; i--)
        {
            if (x != limit)
            {
                arr2[i] = counter + 1;
                counter++;
            }
        }

        // Right
        for (int i = end - 1; i >= start + prev; i--)
        {
            if (i % prev == x && i != end - x - n)
            {
                arr2[i] = counter + 1;
                counter++;
            }
        }
        x++;
        start = start + prev;
        end = end - prev;
        n = n - 2;
        y++;
    }

    for (int i = 0; i < prev * prev; i++)
    {
        cout << arr2[i] << "\t";
        if (i % prev == prev - 1)
        {
            cout << endl;
        }
    }
    return 0;
}