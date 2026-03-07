#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number = ";
    cin >> n;
    int count = 0;

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {

            if (count == 0 || count == n)
            {
                cout << "*";
            }
            else
            {
                if (j == 0 || j == n)
                {
                    cout << "*";
                }
                else
                    cout << " ";
            }
        }

        count++;
        cout << endl;
    }

    return 0;
}