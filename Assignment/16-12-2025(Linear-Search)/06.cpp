#include<bits/stdc++.h>
using namespace std ;

// Q.6 convert all upper to lower case
bool checkpallindrome(string str){
        
        int i = 0 ;
        int j = str.length() - 1 ;
        while( i < j){
            
            if(str[i] != str[j]) return false ;
            i++ ;
            j-- ;
        }
        return true ;
    }
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    if(checkpallindrome(str)) cout << "String is Pallindrome" ;
    else cout << "String is Not Pallindrome" ;
}