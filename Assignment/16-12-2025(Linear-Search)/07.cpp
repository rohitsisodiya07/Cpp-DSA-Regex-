#include<bits/stdc++.h>
using namespace std ;

// Q.7 Count '0' - '9'
int countnumber(string str){
        
        int count = 0 ;
        string countnum = "" ;
        for( auto ch : str){
            
            if( ch >= 48 && ch <= 57){
                count++;
                countnum += ch ;
            }
        }
        cout << "Numbers = " << countnum << endl ;
        return count ;
    }
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    cout << countnumber(str) ;
}