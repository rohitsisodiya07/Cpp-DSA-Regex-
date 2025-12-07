#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n ;
    if( n <= 0){
            cout <<"Please Enter Valid Input"  << endl;
        cout << "Enter Valid Input = " ;
        cin >> n ;
    }
    
    while( n > 0 ){
        

        
        if( n == 1){
            cout << "Special Case" <<endl ;
            break;
        }
        else if( n % 2 == 0 ){
            for( int i = 1 ; i < n/2 ; i++ ){
                
                cout << "Square = " << i*i << endl ;
            }
        }
        else{
            for( int i = n ; i >= 1 ; i-- ){
                
                if( i % 2 == 0) cout << "Even = "<< i <<endl ;
            }
        }
        n = n-3 ;
    }
}