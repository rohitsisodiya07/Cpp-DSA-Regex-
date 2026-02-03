//27. Check whether string starts with a vowel
#include <bits/stdc++.h>

using namespace std ;
bool checkVowel(char key, string str){

    for( auto ch : str){
        
        if( ch == key) return true ;
    }
    return false ;
}

int main() {
    
        string str = "aohit Sisodiya" ;
        string vowel = "aeiouAEIOU" ;
        if(checkVowel(str[0], vowel)) cout << "Yes!!" ;
        else cout << "No" ;
}