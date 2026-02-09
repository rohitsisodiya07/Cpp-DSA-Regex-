//Print All Value of Vector.

#include <bits/stdc++.h>
using namespace std ;
void printVector( vector <int> v, int i){

        if( v.size() == i ) return  ;
        cout << v[i] << " " ;
        printVector(v, i+1) ;
}

int main() {

    vector <int> v = {5, 10, 15, 20} ;
    printVector(v, 0) ;
}