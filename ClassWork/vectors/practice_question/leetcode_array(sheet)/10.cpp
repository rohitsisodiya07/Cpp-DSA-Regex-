// 1979. Find Greatest Common Divisor of Array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {3,3} ;

    sort(v.begin(), v.end()) ;
    int small = v[0] ;
    int large = v[v.size()-1] ;
    while( small % large){

        int c = small % large ;
        small = large ;
        large = c ;
    }
    cout << large ;



    //Using GCD Function.
    // vector <int> v = {3,3} ;

    // sort(v.begin(), v.end()) ;
    // int small = v[0] ;
    // int large = v[v.size()-1] ;
    // cout << __gcd(small, large) ;
}