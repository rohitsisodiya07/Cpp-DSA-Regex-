#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0 ;
    bool flag = true ;
    for( int i = 50 ; i >= 1 ; i--){
        
        if( flag == true && i % 2 == 0 ){
            
            int j = 10 ;
            while( j >= 1 ){
                
                sum = i*j + sum ;
                j--;
            }
            if( sum > 200){
                flag = false ;
            }
        }
        else if( flag == false && i % 2 != 0){
            
            for( int i = 1 ; i <= 2 ; i++ ){
                
                cout << "ODD Loop Running" << endl ;
            }
        }
    }
    cout << "Sum = " << sum << endl ;
    cout << "Flag = "<< flag ;
}