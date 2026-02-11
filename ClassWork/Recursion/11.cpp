// Return Length of Number.

#include <bits/stdc++.h>
using namespace std;
int getlength(int n, int count)
{

    if (n == 0 || n == 1)
        return 1;
    
    return 1 + getlength(n/10, count);
}

int main()
{

    int n = 152;
    
    if( n < 0 ) n = -(n) ;
    if( n < 9 ) cout << "Length = 1" ;
    else cout << "Length = " << getlength(n, 0) ; 
}
