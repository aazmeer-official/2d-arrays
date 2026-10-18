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
    while (x <= limit)
    {
        // Top
        for (int i = start + x; i < start + n + x; i++)
        {
            // cout << i << " TOP " << endl;

            cout << arr[i] << " ";
        }

        // Left

        for (int i = start + n + x; i < end - y; i++)
        {
            if (i % prev == prev - y)
            {
                cout << arr[i] << " ";
            }
        }

        // Bottom
        for (int i = end - y; i > end - y - n; i--)
        {
            if (x != limit)
            {
                cout << arr[i] << " ";
            }
        }

        // Right
        for (int i = end - 1; i >= start + n; i--)
        {
            if (i % prev == x && i != end - x - n)
            {
                cout << arr[i] << " ";
            }
        }
        x++;
        start = start + prev;
        end = end - prev;

        n = n - 2;
        y++;
    }
    return 0;
}