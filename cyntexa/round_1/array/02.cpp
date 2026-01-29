// Find maximum element.

#include <bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v = {2, 4, 25, 32, 10, 21, 30} ;
    sort(v.begin(), v.end()) ;
    cout << v[v.size()-1] ;
}