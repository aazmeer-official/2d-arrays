#include <iostream>
using namespace std;

int main()
{
    int arr[][3] = {{9, 7, 3}, {4, 6, 8}, {5, 2, 1}};
    int n = 3, m = 3;

    for (int k = 0; k < n * m; k++)
    {
        int prev_i = 0, prev_j = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                // cout << prev_i << " " << prev_j << endl
                //      << i << " " << j << endl
                //      << "*****" << endl;
                if (arr[prev_i][prev_j] > arr[i][j])
                {
                    swap(arr[prev_i][prev_j], arr[i][j]);
                }
                prev_i = i;
                prev_j = j;
            }
        }
    }

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