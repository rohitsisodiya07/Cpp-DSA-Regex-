#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str= "I am Rohit Sisodiya";
    string word="";
    for( int i = 0 ; i < str.length() ; i++){
        
        if( str[i] != ' ') word = word + str[i];
        else{
            cout << word << endl;
            word = "";
        }
    }
    cout << word;

}