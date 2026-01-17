// 10 Find the union of two arrays.
#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v1 = {2, 3, 4, 6, 9} ;
    vector <int> v2 = {4, 6, 8, 11} ;
    set <int> s ;
    for( auto ch : v1) s.insert(ch) ;
    for( auto ch : v2) s.insert(ch) ;
    for( auto ch : s) cout << ch << " " ;

}