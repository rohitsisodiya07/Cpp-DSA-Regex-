#include<bits/stdc++.h>
using namespace std ;

//   Q.4 convert all lower to upper case
string lowercase( string str){
        
        string lower = "" ;
        for( auto ch: str){
            
            if( ch >= 65 && ch <= 90 ) lower += ch + 32 ;
            else lower += ch ;
        }
        return lower ;
    }
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    cout << lowercase(str) ;
}