//Reverse String Using Recursion.

#include <bits/stdc++.h>
using namespace std ;
void printVector(string &str, int i, int j){

        if ( i > j ) return ;
        swap(str[i], str[j]) ;
        printVector(str, i+1, j-1) ;
}

int main() {

    string str = "Rohit" ;
    int i = 0 ;
    int j = str.size()-1 ;
    printVector(str, i, j) ;
    for( auto ch  : str) cout << ch << " " ;
}