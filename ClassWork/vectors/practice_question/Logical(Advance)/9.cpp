// 9 Find the intersection of two arrays.
#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v1 = {2, 3, 4, 6, 9} ;
    vector <int> v2 = {4, 6, 8, 11} ;
    map <int, int> m ;
    for( auto ch : v1) m[ch]++ ;
    for( auto ch : v2) m[ch]++;
    for( auto ch : m){

        if( ch.second > 1) cout << ch.first << " " ; 
    }

}