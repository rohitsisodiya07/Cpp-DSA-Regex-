//Find first repeating character.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Rohit Sisodiya";
    map <char, int> m ;
    for( auto ch : str) m[ch]++ ;
    for( auto ch : m){

        if( ch.second > 1){
            cout << "First Repeating Character = " << ch.first ;
            return 0 ;
        }
    }
}