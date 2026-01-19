// 1480. Running Sum of 1d Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Optimal Solution
    vector <int> v = {1, 2, 3, 4} ;
    for( int i = 1 ; i < v.size() ; i++){

        v[i]= v[i] + v[i-1] ;
    }
    for( auto ch : v) cout << ch << " " ;

    // Approach - 1
    // vector <int> v = {1, 2, 3, 4} ;
    // vector <int> ans (v.size()) ;
    // ans[0] = v[0] ;
    // for( int i = 1 ; i < v.size() ; i++){

    //     ans[i]= v[i] + ans[i-1] ;
    // }
    // for( auto ch : ans) cout << ch << " " ;
}