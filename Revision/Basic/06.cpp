// Write a program to find all duplicate elements in an array..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector <int> v = {1,2,3,2,4,5,1,6} ;
    unordered_map <int, int>m ;
    for( auto ch : v){
        m[ch]++;
    }
    for( auto ch : m){
        if( ch.second > 1) cout << ch.first << " " ;
    }
}
