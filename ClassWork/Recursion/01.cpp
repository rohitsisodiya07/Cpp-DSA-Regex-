//print number from 1 to 10.

#include <bits/stdc++.h>
using namespace std ;
void printNum( int n){

        if( n > 10 ) return  ;
        cout << n << " " ;
        printNum(n+1) ;
}

int main() {

    printNum(1) ;
}