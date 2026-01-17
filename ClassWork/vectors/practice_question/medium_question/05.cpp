// 5 Copy all elements of one array into another.

#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v = {10, 11, 5, 7, 6, 2} ;

    //Direct Copy
    vector <int> v2 = v ;
    for( auto ch: v) cout << ch << " " ;
    cout << endl ;
    for( auto ch: v2) cout <<  ch << " " ;
    
    //Using Loop
    // vector <int> v2 ;
    // for( auto ch : v) v2.push_back(ch) ;
    // for( auto ch: v) cout << ch << " " ;
    // cout << endl ;
    // for( auto ch: v2) cout << ch << " " ;
}