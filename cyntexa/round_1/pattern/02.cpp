// Inverted right angle star triangle

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (j >= 0 && j < n-i)
            {
                cout << 'x' << " ";
            }
        }
        cout << endl;
    }
}