#include<bits/stdc++.h>
using namespace std;

int main()
{
	string sentence;
    cout << "Enter Sentence = ";
    getline(cin, sentence);
    string word = "";
    // for( int i = 0 ; i < sentence.length() ; i++){
        
    //     if( sentence[i] != ' '){
    //         word = word + sentence[i];
    //     }
    //     else{
    //         cout << word  << endl;
    //         word = "";
    //     }
    // }
    // cout << word ;
    //*************************************
    // int i = 0;
    // while( i < sentence.length()){
        
    //     if( sentence[i] == ' '){
    //         cout << word << endl ;
    //         word = "";
    //     }
    //     else{
    //         word = word + sentence[i];
    //     }
    //     i++;
    // }
    // cout << word ;
    //***************************************
    // int i = 0 ;
    // do{
    //     if( sentence[i] == ' '){
    //         cout << word << endl ;
    //         word = "";
    //     }
    //     else{
    //         word = word + sentence[i] ;
    //     }
    //     i++;
    // }while( i < sentence.length());
    // cout << word ;
    //****************************************
    // for( char ch : sentence){
    //     if( ch == ' '){
    //         cout << word << endl ;
    //         word = "";
    //     }
    //     else{
    //         word = word + ch ;
    //     }
        
    // }
    // cout << word ;
    //******************************************
     for( char &ch : sentence){
        if( ch == ' '){
            cout << word << endl ;
            word = "";
        }
        else{
            word = word + ch ;
        }    
    }
    cout << word ;
}