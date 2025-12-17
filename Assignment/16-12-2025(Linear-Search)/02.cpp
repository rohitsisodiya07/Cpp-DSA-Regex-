#include<bits/stdc++.h>
using namespace std ;

//Q.2 count vowels using loops only.
bool linearsearch(char key, string str){
    
    for( int i = 0 ; i < str.length(); i++){
        
        if( str[i] == key) return true ;
    }
    return false ;
}

int countvowels(string str){
    
    string vowels = "aeiouAEIOU" ;
    string res = "" ;
    int count = 0 ;
    for( auto ch : str){
        
        if( linearsearch(ch, vowels)){
            res += ch ;
            count++ ;
            }
        
    }
    cout << "Vowels = " << res << endl;
    return count ;
}
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    cout << countvowels(str) ;
}