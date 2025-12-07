#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num, fact = 1 ;
	cout << "Enter Number = " ;
	cin >> num ;
	for( int i = num ; i > 0 ; i--){

	    fact = fact * i ;
	}
	cout << "Factorial = " << fact ;
	//*************************************
	// int num, fact = 1 ;
	// cout << "Enter Number = " ;
	// cin >> num ;
	// int i = num ;
	// while(i > 0){

	//     fact = fact * i ;
	//     i--;
	// }
	// cout << "Factorial = " << fact ;
	//**************************************
	// int num, fact = 1 ;
	// cout << "Enter Number = " ;
	// cin >> num ;
	// int i = num ;
	// do{

	//     fact = fact * i ;
	//     i--;
	// }while(i > 0);
	// cout << "Factorial = " << fact ;

}