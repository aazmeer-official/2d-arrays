#include <iostream>
using namespace std;

void outputMatrix(int arr[100][100], int n, int m)
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
void saddle(int arr[100][100], int rows, int cols)
{

    bool booli[100][100];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            booli[i][j] = true;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        int min = arr[i][0];
        for (int j = 0; j < cols; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] != min)
            {
                booli[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < cols; i++)
    {
        int max = arr[0][i];
        for (int j = 0; j < rows; j++)
        {
            if (max < arr[j][i])
            {
                max = arr[j][i];
            }
        }
        for (int j = 0; j < rows; j++)
        {
            if (max != arr[j][i])
            {
                booli[j][i] = 0;
            }
        }
    }
    bool found = false;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (booli[i][j] != 0)
            {
                cout << arr[i][j] << " at : (" << i << "," << j << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No saddle Point";
    }
}

int main()
{
    int arr[100][100];
    int rows, cols;

    inputMatrix(arr, rows, cols);

    saddle(arr, rows, cols);
    return 0;
}