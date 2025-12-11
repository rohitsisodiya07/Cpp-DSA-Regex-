#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    int temp = 1 ;
    for( int i = 0 ; i <= num ; i++){
        
        temp = 1 ;
        for( int j = 0 ; j <= 2*num ; j++){
            
            if( j >= (num-i) && j <= (num+i)){
                cout << temp ;
                temp++ ;
            }
            
            else cout << " " ;
        }
        cout << endl ;
    }
    for( int i = 1 ; i <= num ; i++){
        
        
        temp = 1 ;
        for( int j = 0 ; j <= 2*num ; j++){
            
            if( j >= i && j <= ((2*num)-i) ){
                cout << temp ;
                temp++ ;
            }
            
            else cout << " " ;
        }
        cout << endl ;
    }
}