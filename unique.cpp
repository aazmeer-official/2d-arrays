#include <iostream>
using namespace std;

int main()
{
    int arr[1000] = {};
    int n;
    cout << "Size : ";
    cin >> n;
    bool found = false;
    cout << "Plz Enter Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int freq[1000] = {};
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int n2 = max + 1;

    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        freq[value] += 1;
    }

    for (int i = 0; i < n2; i++)
    {
        if (freq[i] == 1)
        {
            cout << "Value is : " << i << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "NO unique Element ";
    }

    return 0;
}