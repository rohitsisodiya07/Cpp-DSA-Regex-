#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int n ;
    cout <<"Enter Value = " ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        
        for( int j = 0 ; j < n ; j++ ){
            
            if( j >= 0 && j <= i ) cout << "*" ;
        }
        cout << endl ;
    }
}