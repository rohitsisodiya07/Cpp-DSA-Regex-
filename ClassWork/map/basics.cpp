#include<bits/stdc++.h>
using namespace std ;

int main(){

    // vector <int> vec = {1,1,1,2,2,2,2,3,4,5,6,} ;
    // map<int, int> ma ;// Take Key, Value pair and key must be unique. and in sorted manner
    // for( auto x : vec) {
        
    //     ma[x]++ ;
    // }
    // for( auto x : ma) cout << x.first << " => " << x.second << endl ;

    //unordered map // store in unsorted manner
    // vector <int> vec = {1,1,1,2,2,2,2,3,4,5,6,} ;
    // unordered_map<int, int> ma ;
    // for( auto x : vec) {
        
    //     ma[x]++ ;
    // }
    // for( auto x : ma) cout << x.first << " => " << x.second << endl ;

    //************************************************************************* */

    // vector <string> v = {"apple", "apple", "banana", "banana", "cat", "dog", "dog"} ;
    // map<string, int> m ;
    // for( auto x : v) {
        
    //     m[x]++;
    // }
    // for( auto x : m) cout << x.first << " => " << x.second << endl ;

    vector <char> vec = {'a','b','a','c','b','d'} ;
    map<char, int> ma ;
    for( auto x : vec) {
        
        ma[x]++ ;
    }
    for( auto x : ma) cout << x.first << " => " << x.second << endl ;

}