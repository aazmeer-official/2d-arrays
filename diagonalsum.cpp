#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);

    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += arr[i][i];
    }

    for (int i = 0; i < rows; i++)
    {
        if (i != cols - 1 - i)
        {
            sum += arr[i][cols - 1 - i];
        }
    }

    cout << "The sum is : " << sum;
    return 0;
}