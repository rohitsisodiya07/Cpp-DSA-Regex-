// Reverse number triangle.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int temp;

    for (int i = 0; i <= n; i++)
    {
        temp = 1 ;
        for (int j = 0; j <= n; j++)
        {
            if( j >= 1 && j <= n-i){
                cout << temp << " " ;
                temp++;
            }
        }
        cout << endl;
    }
    return 0;
}
