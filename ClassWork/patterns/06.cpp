#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int n ;
    cout << "Enter Number = " ;
    cin >> n ;
    char ch = 'A' ;
    for( int i = 0 ; i <= n ; i++ ){
        
        ch = 'A' ;
        for( int j = 0 ; j <= n ; j++ ){
            
            if( j >= 0 && j <= i){
                
                cout<< ch ;
                ch++;
            }
            else cout<< " " ;
        }
        cout << endl ;
    }
}