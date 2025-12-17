#include<bits/stdc++.h>
using namespace std ;

// Q.1 Reverse String
string reversestring(string str){
    string rev = "" ;
    for( int i = str.length()-1 ; i >= 0 ; i--){
        
        rev += str[i] ;
    }
    return rev ;
}
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    cout << "Reversed String = " << reversestring(str) ;
}