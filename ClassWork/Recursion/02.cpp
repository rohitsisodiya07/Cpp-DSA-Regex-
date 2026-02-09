//print number from 10 to 1.

#include <bits/stdc++.h>
using namespace std ;
void printNum( int n){

        if( n < 1 ) return  ;
        cout << n << " " ;
        printNum(n-1) ;
}

int main() {

    printNum(10) ;
}