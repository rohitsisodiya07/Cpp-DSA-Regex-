// 24. Copy one string into another without using inbuilt function.

#include <bits/stdc++.h>
using namespace std ;

int main(){

        string str = "Rohit Sisodiya" ;
        string copy = ""  ;
        for( auto ch : str){

            copy += ch ;
        }
        cout << copy ;

}