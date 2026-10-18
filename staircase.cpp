#include <iostream>
using namespace std;

void sorted(int arr[][3], int rows, int cols)
{

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
}
void output(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int sorted_Y(int arr[][3], int rows, int cols)
{
    for (int k = 0; k < rows * cols; k++)
    {
        for (int i = 0; i < rows - 1; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] > arr[i + 1][j])
                {
                    swap(arr[i + 1][j], arr[i][j]);
                }
            }
        }
    }
}

int main()
{
    int arr[][3] = {{5, 9, 7}, {1, 2, 9}, {0, 1, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);

    sorted(arr, rows, cols);
    sorted_Y(arr, rows, cols);
    output(arr, 3, 3);
    return 0;
}