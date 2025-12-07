#include<bits/stdc++.h>
using namespace std;

void isPrime(int n){
        for(int i = 2 ; i < n ; i++){
            
            if( n % i == 0 ){
                
            cout << "Not Prime" ;
            return ;
            }
        }
        cout << "Prime" ;
    }
    
int main()
{
    int n ;
    cout << "Enter Number = " ;
    cin >> n ;
    isPrime(n) ;
}