#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int n  = 3;
    cout << "Enter Number = " ;
    cin >> n ;
    for( int i = 0 ; i <= n ; i++ ){
        
        for( int j = 0 ; j <= 2*n ; j++ ){
            
            if( j >= 2-i && j <= 2+i) cout<< "*" ;
            else cout<< " " ;
        }
        cout << endl ;
    }
}