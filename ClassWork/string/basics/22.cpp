// 22. Reverse a string word by word


#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    string str = "Hey I am Rohit" ;
    reverse(str.begin(), str.end()) ;
    // cout << str ;
    string word = "" ;
    string sentence = "" ;
    for( auto ch : str){

            if( ch == ' '){

                    reverse(word.begin(), word.end()) ;
                    sentence += word ;
                    sentence += " " ;
                    word = "" ;
                    
                }
                else {
                    word += ch ;
                }
            }
            reverse(word.begin(), word.end()) ;
            sentence += word ;
    cout << sentence ;



}