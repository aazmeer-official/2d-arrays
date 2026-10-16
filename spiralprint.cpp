#include <iostream>
using namespace std;

int main()
{
    int arr[100][100] = {};

    cout << "Please Enter the value of n : ";

    int n;
    cin >> n;
    int m = n;
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;
    int value = 1;
    while (srow <= erow && scol <= ecol)
    {
        // Output for Spiral Matrix
        // Top
        for (int j = scol; j <= ecol; j++)
        {
            arr[srow][j] = value;
            value++;
        }

        // Right
        for (int i = srow + 1; i <= erow - 1; i++)
        {
            arr[i][ecol] = value;
            value++;
        }

        // Bottom
        for (int j = ecol; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            arr[erow][j] = value;
            value++;
        }

        // Left

        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            arr[i][scol] = value;
            value++;
        }

        srow++;
        erow--;
        ecol--;
        scol++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}