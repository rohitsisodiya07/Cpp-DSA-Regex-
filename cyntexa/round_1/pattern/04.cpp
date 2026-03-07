#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number = ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n * 2; j++)
        {

            if (j >= (n - i) && j <= (n + i))
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j <= n * 2; j++)
        {

            if (j >= i && j <= (n * n - i))
            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}