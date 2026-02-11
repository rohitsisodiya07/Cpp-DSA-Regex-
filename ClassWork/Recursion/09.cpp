// Return Sum from 1 to n by Recursion.

#include <bits/stdc++.h>
using namespace std;
int getSum(int n)
{

    if( n == 1 ) return 1 ;
    return n + getSum(n-1) ;
}

int main()
{

    int n = 5 ;
    cout << "Sum of Numbers = " << getSum(n) ;
}
