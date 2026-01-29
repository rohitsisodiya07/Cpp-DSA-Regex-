#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 3;
    // cout << "Enter Number = " ;
    // cin >> num ;
    char ch = 'A' ;
    for( int i = 0 ; i <= num ; i++){
        
        ch = 'A' ;
        for( int j = 0 ; j <= 2*num ; j++){
            
            if( j >= (num-i) && j <= (num+i)){
                cout << ch ;
                ch++ ;
            }
            else cout << " " ;
        }
        cout << endl ;
        }
}