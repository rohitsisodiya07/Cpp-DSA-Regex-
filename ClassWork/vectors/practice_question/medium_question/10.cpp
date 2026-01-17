// Merge two arrays into a third array.
#include <bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v1 = {10, 20, 30, 5, 6} ;
    vector <int> v2 = {-15, -5, -40, -2} ;
    vector <int> v3 ;
    
    for( auto ch : v1 ) v3.push_back(ch) ;
    for( auto ch : v2 ) v3.push_back(ch) ;
    for( auto ch : v3) cout << ch << " " ;

}