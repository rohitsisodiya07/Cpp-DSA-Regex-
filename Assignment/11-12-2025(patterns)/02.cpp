#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    char ch = 'A' ;
    for( int i = 0 ; i <= num ; i++){
        
        ch = 'A' ;
        for( int j = 0 ; j <= num ; j++){
            
            if( j >= 0 && j <= i){
                cout << ch ;
                ch++ ;
            }
        }
        cout << endl ;
        }
}