// Return the Factorial of a Given Number.

#include <bits/stdc++.h>
using namespace std;
int getFact(int n)
{

    if( n == 1 ) return 1 ;
    return n * getFact(n-1) ;
}

int main()
{

    int n = 5 ;
    cout << "Factorial of Numbers = " << getFact(n) ;
}
