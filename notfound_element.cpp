#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int n = 6;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = true;
            }
        }
        if (!found)
        {
            cout << i << " ";
        }
    }

    return 0;
}