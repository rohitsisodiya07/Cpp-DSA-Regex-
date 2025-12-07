#include<bits/stdc++.h>
using namespace std;

void factorial(int n){
    
    int fact = 1 ;
    for( int i = 1 ; i <= n ; i++){
        
        fact = fact * i ;
    }
    cout << "Factorial = " << fact ;
}

int main()
{
   	int n ;
	cout << "Enter Number = " ;
	cin >> n ;
	factorial(n) ;
}