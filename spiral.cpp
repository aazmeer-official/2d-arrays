#include <iostream>
using namespace std;

int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = 3, m = 4;
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // Output for Spiral Matrix
        // Top
        for (int j = scol; j <= ecol; j++)
        {
            cout << arr[srow][j] << " ";
        }

        // Right
        for (int i = srow + 1; i <= erow - 1; i++)
        {
            cout << arr[i][ecol] << " ";
        }

        // Bottom
        for (int j = ecol; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            cout << arr[erow][j] << " ";
        }

        // Left

        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << arr[i][scol] << " ";
        }

        srow++;
        erow--;
        ecol--;
        scol++;
    }
    return 0;
}