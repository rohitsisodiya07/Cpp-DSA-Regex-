//Reverse Vector Using Recursion.

#include <bits/stdc++.h>
using namespace std ;
void printVector(vector <int> &v, int i, int j){

        if ( i > j ) return ;
        swap(v[i], v[j]) ;
        printVector(v, i+1, j-1) ;
}

int main() {

    vector <int> v = {1, 2, 3} ;
    int i = 0 ;
    int j = v.size()-1 ;
    printVector(v, i, j) ;
    for( auto ch  : v) cout << ch << " " ;
}