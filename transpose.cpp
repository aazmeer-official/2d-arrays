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
void transpose(int arr[100][100], int &rows, int &cols)
{
    int output[100][100];
    swap(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            output[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = output[i][j];
        }
    }
}
int main()
{
    int arr[100][100] = {};
    int rows, cols;
    inputMatrix(arr, rows, cols);
    transpose(arr, rows, cols);
    outPut(arr, rows, cols);
    return 0;
}