#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num=4 ;
    // cout << "Enter Number = " ;
    // cin >> num ;
    int temp = 1 ;
    for( int i = 0 ; i <= num ; i++){
        
        temp = 1 ;
        for( int j = 0 ; j <= num ; j++){
            
            if( j >= 0 && j <= i){
                cout << temp ;
                temp++ ;
            }
        }
        cout << endl ;
        }
}