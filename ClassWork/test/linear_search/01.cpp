//Q.1 Check if String is Pallindrome.

#include<bits/stdc++.h>
using namespace std ;
bool checkpallindrome( string str ){

    int i = 0, j = str.length() - 1 ;
    while( i < j){

        if(str[i] != str[j] ) return false ;
        i++ ;
        j-- ;
    }
    return true ;
}

int main(){

    string str = "madam" ;
	if(checkpallindrome(str)) cout << "Pallindrome" ;
	else cout << "Not Pallindrome" ;
}