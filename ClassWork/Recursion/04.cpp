//Print All Value of Vector in Reverse.

#include <bits/stdc++.h>
using namespace std ;
void printVector( vector <int> v, int i){

        if( i < 0 ) return  ;
        cout << v[i] << " " ;
        printVector(v, i-1) ;
}

int main() {

    vector <int> v = {5, 10, 15, 20} ;
    int i = v.size()-1 ;
    printVector(v, i) ;
}