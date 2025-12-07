#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n, fact = 1 ;
    cout <<"Enter Numbers = " ;
    cin >> n ;
    for( int i = 1 ; i <= n ; i++){
        fact = fact * i ;
    }
    cout << "Factorial = " << fact ;

}