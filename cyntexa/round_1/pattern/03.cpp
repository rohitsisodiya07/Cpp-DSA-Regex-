//Pyramid pattern (spaces + stars).

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {

            if (j >= (n-i) && j <= (n+i))
            {
                cout << 'x' ;
            }
            else cout << " "; 
        }
        cout << endl;
    }
}