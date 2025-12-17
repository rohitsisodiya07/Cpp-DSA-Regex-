#include<bits/stdc++.h>
using namespace std ;

// Q.9 count special character(not letters, digits, spaces)

  string countspecial(string str){
        
        string special = "" ;
        for( auto ch : str){
            
            if( !(ch >= 48 && ch <= 57 || ch >= 65 && ch <= 90 || ch >= 97 && ch <= 123 || ch == 32) ) special += ch ;
        }
        return special ;
    }
int main(){
    string str ;
    cout << "Enter String = " ;
    cin >> str ;
    cout << countspecial(str) ;
}