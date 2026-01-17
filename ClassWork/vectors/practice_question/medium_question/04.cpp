// 4 Remove duplicates from an array.

#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v = {2, 2, 2, 4, 4, 6, 6, 7, 7} ;

    //Using Set
    // set <int> s ;
    // for( auto ch: v) s.insert(ch) ;
    // for( auto ch : s) cout << ch << " " ; 

    //Using Map
    map <int, int> m ;
    for( auto ch: v) m[ch]++ ;
    for( auto ch : m) cout << ch.first << " " ; 
}