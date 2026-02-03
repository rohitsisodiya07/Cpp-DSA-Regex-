//1. Reverse a String Using Stack.

#include <bits/stdc++.h>

using namespace std ;


int main() {

    string str = "Rohit" ;
    stack <char>  s ;
    for( auto ch : str) s.push(ch) ;
    int i = 0 ;
    while( !s.empty()){

            cout << s.top() << endl ;
            str[i] = s.top() ;
            i++ ;
            s.pop() ;
    }
    cout<< str ;

}