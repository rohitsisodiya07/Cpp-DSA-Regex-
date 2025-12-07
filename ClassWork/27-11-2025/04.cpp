#include<bits/stdc++.h>
using namespace std;

int main()
{
	int start, end, sum = 0 ;
	cout << "Enter Number = " ;
	cin >> start >> end ;
	for( int i = start ; i <= end ; i++){

	    if( i % 2 != 0) sum = sum + i ;
	}
	cout << "Sum = " << sum ;
	//*********************************************
	// int start, end, sum = 0 ;
	// cout << "Enter Number = " ;
	// cin >> start >> end ;
	// int i = start ;
	// while(i <= end){

	//     if( i % 2 != 0) sum = sum + i ;
	//     i++;
	// }
	// cout << "Sum = " << sum ;
	//********************************************
	// int start, end, sum = 0 ;
	// cout << "Enter Number = " ;
	// cin >> start >> end ;
	// int i = start ;
	// do{

	//     if( i % 2 != 0) sum = sum + i ;
	//     i++;
	// }while(i <= end);
	// cout << "Sum = " << sum ;
}