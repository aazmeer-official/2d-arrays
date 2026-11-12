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

    int x = 0;
    int y = 1;
    int prev = n;
    int limit = n / 2;
    int counter = 1;
    while (x <= limit)
    {
        // Top
        for (int i = start + x; i < start + n + x; i++)
        {
            // cout << i << " TOP " << endl;

            arr[i] = counter;
            counter++;
        }

        // Left

        for (int i = start + n + x; i < end - y; i++)
        {
            if (i % prev == prev - y)
            {
                arr[i] = counter;
                counter++;
            }
        }

        // Bottom
        for (int i = end - y; i > end - y - n; i--)
        {
            if (x != limit)
            {
                arr[i] = counter;
                counter++;
            }
        }

        // Right
        for (int i = end - 1; i >= start + n; i--)
        {
            if (i % prev == x && i != end - x - n)
            {
                arr[i] = counter;
                counter++;
            }
        }
        x++;
        start = start + prev;
        end = end - prev;

        n = n - 2;
        y++;
    }

    for (int i = 0; i < counter - 1; i++)
    {
        cout << arr[i] << "\t";
        if (i % prev == prev - 1)
        {
            cout << endl;
        }
    }

    return 0;
}