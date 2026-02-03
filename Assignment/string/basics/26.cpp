// 26. Count number of spaces in a string
#include <bits/stdc++.h>

using namespace std ;

int main() {
    
        string str = " R o h i t S i s o d i y a " ;
        int count = 0 ;
        for( auto ch : str){

            if( ch == ' ') count++ ;
        }
        cout << "Total Spaces = " << count ;
}