#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	 int num, sum = 0 ;
	cout << "Enter Number = " ;
	cin >> num ;
	for( int i = 1 ; i <= num ; i++){

	    if( i % 2 == 0) sum = sum + i ;
	}
	cout << "Sum = " << sum ;
	//*****************************************
	// int num, sum = 0 ;
	// cout << "Enter Number = " ;
	// cin >> num ;
	// int i = 1 ;
	// while( i <= num ){

	//   if( i % 2 == 0) sum = sum + i ;
	//     i++ ;
	// }

	// cout << "Sum = " << sum ;
	//********************************************
	//  int num, sum = 0 ;
	// cout << "Enter Number = " ;
	// cin >> num ;
	// int i = 1 ;
	// do{

	//     if(i % 2 == 0)sum = sum + i ;
	//     i++ ;
	// }while( i <= num );

	// cout << "Sum = " << sum ;
}