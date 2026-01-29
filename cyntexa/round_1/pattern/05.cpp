// Number triangle

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int temp;
    for (int i = 0; i <= n; i++)
    {
        temp = 1 ;
        for (int j = 0; j <= n; j++)
        {

            if (j >= 0 && j <= i)
            {
                cout << temp << " ";
                temp++;
            }
        }
        cout << endl;
    }
}