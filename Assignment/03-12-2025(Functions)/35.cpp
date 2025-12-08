#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
        
        int a = 0, b = 1 ;
        cout << a << " " << b << " " ;
        for( int i = 2 ; i < n ; i++){
            
            int c = a + b ;
            cout << c << " " ;
            a = b ;
            b = c ;
        }
    }

int main()
{
	int n ;
    cout << "Enter Number = " ;
    cin >> n ;
    fibonacci(n) ;
}