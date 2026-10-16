#include <iostream>
using namespace std;

int main()
{
    int n;
    int accbalance = 2000;
    int remlimit = 800;
    int addmoney;
    while (true)
    {
        cout << "enter from the following numbers" << endl;

        cout << "1.check balance" << endl;
        cout << "2.add money" << endl;
        cout << "3.send money" << endl;
        cout << "4.exit" << endl;
        cin >> n;
        if (n == 1)
        {
            cout << accbalance;
        }
        else if (n == 2)
        {

            cout << "enter add money" << endl;
            cin >> addmoney;
            if (addmoney > 0)
            {
                accbalance = accbalance + addmoney;
                cout << accbalance << endl;
            }
        }
        else if (n == 3)
        {
            int sendmoney;
            cout << "enter send money" << endl;
            cin >> sendmoney;

            if (sendmoney > 0 && sendmoney < accbalance && sendmoney < remlimit)
            {
                accbalance = accbalance - sendmoney;
                cout << accbalance << endl;
                remlimit = remlimit - sendmoney;
                cout << remlimit << endl;
            }
            else
            {
                cout << "invalid" << endl;
            }
        }
        else if (n == 4)
        {
            break;
        }
    }

    return 0;
}
