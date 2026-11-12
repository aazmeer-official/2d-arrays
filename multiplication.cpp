#include <iostream>
using namespace std;
void outPut(int arr[100][100], int n, int m)
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
void inputMatrix(int arr[100][100], int &rows, int &cols)
{
    cout << "Please Enter the rows : ";
    cin >> rows;
    cout << "Please Enter the cols : ";
    cin >> cols;
    cout << "Please Enter " << rows * cols << " Values ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}
int main()
{
    int arr[100][100] = {};
    int rows = 0;
    int cols = 0;
    inputMatrix(arr, rows, cols);
    int arr2[100][100] = {};
    int rows2 = 0;
    int cols2 = 0;
    inputMatrix(arr2, rows2, cols2);

    // ALGO
    int result[100][100] = {};
    int row3, cols3;
    row3 = rows;
    cols3 = cols2;
    if (cols != rows2)
    {
        cout << "Invalid Matrices ";
        return -1;
    }

    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < cols3; j++)
        {
            int sum = 0;
            for (int k = 0; k < rows2; k++)
            {
                sum += arr[i][k] * arr2[k][j];
            }
            result[i][j] = sum;
        }
    }

    outPut(result, row3, cols3);

    return 0;
}