#include<bits/stdc++.h>
using namespace std ;

//  Q.5 convert all upper to lower case
string uppercase( string str){
        
        string upper = "" ;
        for( auto ch: str){
            
            if( ch >= 65 && ch <= 90 ) upper += ch ;
            else  upper += ch - 32 ;
        }
        return upper ;
    }
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    cout << uppercase(str) ;
}