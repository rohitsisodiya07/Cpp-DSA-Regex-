#include<bits/stdc++.h>
using namespace std ;

// Q.8 count alphabet only
 int countalphabet( string str){
        
        int count = 0 ;
        string alphabet = "" ;
        for( auto ch : str)
        {
            if( ch >=65 && ch <= 91 || ch >= 97 && ch <=123 ){
                
                alphabet += ch ;
                count++;
            }
        }
        cout << "Aplhabet = " << alphabet << endl ;
        return count ;
    }
int main(){
    string str ;
    cout << "Enter Your String = " ;
    cin >> str ;
    cout << countalphabet(str) ;
}