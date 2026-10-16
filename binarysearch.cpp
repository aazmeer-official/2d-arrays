#include <iostream>
using namespace std;

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(int);

    int n = 8;
    int found = false;
    for (int i = 0; i < rows; i++)
    {
        int start = 0, end = cols - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (arr[i][mid] == n)
            {
                found = true;
                cout << "Value found at Row: : " << i << " Col : " << mid;
                break;
            }
            else if (arr[i][mid] > n)
            {
                end = mid - 1;
            }
            else if (arr[i][mid] < n)
            {
                start = mid + 1;
            }
        }
    }
    return 0;
}