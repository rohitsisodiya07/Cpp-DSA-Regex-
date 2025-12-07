#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, sum = 0  ;
	cout << "Enter Numbers = " ;
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10 ;
	if( n1 % 2 == 0) sum = sum + n1 ;
	if( n2 % 2 == 0) sum = sum + n2 ;
	if( n3 % 2 == 0) sum = sum + n3 ;
	if( n4 % 2 == 0) sum = sum + n4 ;
	if( n5 % 2 == 0) sum = sum + n5 ;
	if( n6 % 2 == 0) sum = sum + n6 ;
	if( n7 % 2 == 0) sum = sum + n7 ;
	if( n8 % 2 == 0) sum = sum + n8 ;
	if( n9 % 2 == 0) sum = sum + n9 ;
	if( n10 % 2 == 0) sum = sum + n10 ;

	cout << "Sum = " << sum ;
}