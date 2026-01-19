// 1929. Concatenation of Array

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v = {2, 4, 5, 6, 3, 1} ;
    vector <int> ans ;
    for( auto ch : v) ans.push_back(ch) ;
    for( auto ch : v) ans.push_back(ch) ;
    for( auto ch : ans) cout << ch << " ";
}