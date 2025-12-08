#include<bits/stdc++.h>
using namespace std;

int main()
{	
 	int num, sum = 0 ;
	cout << "Enter Number =";
	cin >> num ;
	for ( int i = 1 ; i <= num/2 ; i++) {
		if( num % i == 0 ){
		    sum = sum + i ;
		}
	}
	if( num == sum ) cout << "Perfect Number" ;
	else cout << "Not Perfect Number" ;
}