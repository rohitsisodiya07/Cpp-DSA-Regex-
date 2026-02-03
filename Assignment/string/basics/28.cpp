//28. Check whether string ends with a consonant.
#include <bits/stdc++.h>

using namespace std ;
bool checkVowel(char key, string str){

    for( auto ch : str){
        
        if( ch == key) return true ;
    }
    return false ;
}

int main() {
    
        string str = "aohit Sisodiy" ;
        string vowel = "aeiouAEIOU" ;
        if(checkVowel(str[str.length()-1], vowel)) cout << "No" ;
        else cout << "Yes!!" ;
}