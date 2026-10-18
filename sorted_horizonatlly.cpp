#include <iostream>
using namespace std;

int main()
{
    int arr[][3] = {{2, 9, 7}, {5, 2, 9}, {7, 1, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);

    for (int k = 0; k < rows * cols; k++)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols - 1; j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    swap(arr[i][j], arr[i][j + 1]);
                }
            }
        }
    }

    int n = rows, m = cols;

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