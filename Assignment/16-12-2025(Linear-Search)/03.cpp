#include<bits/stdc++.h>
using namespace std ;

//  Q.3 count Consonant using loops only.
 bool linearsearch(char key, string str){
    
    for( int i = 0 ; i < str.length(); i++){
        
        if( str[i] == key) return true ;
    }
    return false ;
}

int countconsonant(string str){
    
    string vowels = "aeiouAEIOU" ;
    string res = "" ;
    int count = 0 ;
    for( auto ch : str){
        
        if( !linearsearch(ch, vowels)){
            res += ch ;
            count++ ;
        }
    }
    cout << "Consonant = " << res << endl;
    return count ;
}
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    cout << countconsonant(str) ;
}