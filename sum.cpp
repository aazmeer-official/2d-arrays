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

bool sumArr(int arr[100][100], int rows, int cols)
{

    int value;
    bool found = false;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }

        // Checking Value
        if (!found)
        {
            value = sum;
            found = true;
        }
        else
        {
            if (value != sum)
            {
                return false;
            }
        }

        cout << "Sum of Row " << i << " is : " << sum << endl;
    }

    // Vertical

    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += arr[j][i];
        }
        if (value != sum)
        {
            return false;
        }

        cout << "Sum of Cols " << i << " is : " << sum << endl;
    }

    // Right Diagonal
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += arr[i][i];
    }
    cout << "Sum of Right Diagonal is : " << sum << endl;
    if (value != sum)
    {
        return false;
    }

    // Left Diagonal
    sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += arr[i][rows - 1 - i];
    }
    cout << "Sum of Right Diagonal is : " << sum << endl;
    if (value != sum)
    {
        return false;
    }

    return true;
}
int main()
{
    int arr[100][100];
    int rows, cols;
    inputMatrix(arr, rows, cols);
    cout << sumArr(arr, rows, cols);

    return 0;
}