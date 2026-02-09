//Replace All Value by -1.

#include <bits/stdc++.h>
using namespace std ;
void printVector( vector <int> &v, int i){

        if( v.size() == i ) return  ;
        v[i] = -1 ;
        printVector(v, i+1) ;
}

int main() {

    vector <int> v = {5, 10, 15, 20} ;
    printVector(v, 0) ;
    for( auto ch  : v) cout << ch << " " ;
}