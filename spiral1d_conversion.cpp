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
    int arr2[1000];
    while (x <= limit)
    {
        // Top
        for (int i = start + x; i < start + n + x; i++)
        {
            // cout << i << " TOP " << endl;

            cout << arr[i] << " ";
            arr2[counter] = arr[i];
            counter++;
        }

        // Left

        for (int i = start + n + x; i < end - y; i++)
        {
            if (i % prev == prev - y)
            {
                cout << arr[i] << " ";
                arr2[counter] = arr[i];
                counter++;
            }
        }

        // Bottom
        for (int i = end - y; i > end - y - n; i--)
        {
            if (x != limit)
            {
                cout << arr[i] << " ";
                arr2[counter] = arr[i];
                counter++;
            }
        }

        // Right
        for (int i = end - 1; i >= start + n; i--)
        {
            if (i % prev == x && i != end - x - n)
            {
                cout << arr[i] << " ";
                arr2[counter] = arr[i];
                counter++;
            }
        }
        x++;
        start = start + prev;
        end = end - prev;
        cout << "Counter : " << counter;
        n = n - 2;
        y++;
    }
    cout << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << arr2[i] << " ";
        if (i % prev == prev - 1)
        {
            cout << endl;
        }
    }

    return 0;
}