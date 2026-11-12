#include <iostream>
using namespace std;

int main()
{
    int arr[1000] = {};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arr2[1000] = {};
    int n2 = n;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr2[counter] = arr[i];
            counter++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr2[counter] = arr[i];
            counter++;
        }
    }

    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}