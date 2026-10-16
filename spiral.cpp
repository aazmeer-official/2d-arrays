#include <iostream>
using namespace std;

int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4, m = 4;
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;
    // Output for Spiral Matrix
    // Top
    for (int j = scol; j <= ecol; j++)
    {
        cout << arr[srow][j] << " ";
    }
    // Left
    for (int i = 0; i <= erow; i++)
    {
        cout << arr[i][ecol] << " ";
    }

    // Bottom
    for (int j = ecol; j >= scol; j--)
    {
        cout << arr[erow][j] << " ";
    }

    // Left

    for (int i = erow - 1; i >= srow + 1; i--)
    {
        cout << arr[i][scol] << " ";
    }

    return 0;
}