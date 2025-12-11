#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    char ch = 'A' ;
    int temp = 1 ;
    for( int i = 0 ; i <= num ; i++){
        
        
        for( int j = 0 ; j <= num ; j++){
            
            if( j >= 0 && j <= i){
                cout << ch ;
            }
        }
        cout << endl ;
        for( int j = 0 ; j <= num ; j++){
            
            if( j >= 0 && j <= i){
                cout << temp ;
            }
        }
        ch++ ;
        temp++;
        cout << endl ;
        }
    }