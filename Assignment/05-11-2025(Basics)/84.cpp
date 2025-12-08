#include<bits/stdc++.h>
using namespace std;

int main()
{	
 	int a, b, c, d, e, f, sum = 0;
	cout << "Enter Values = ";
	cin >> a >> b >> c >> d >> e >> f ;
	if( a % 2 != 0) sum = sum + a;
	if( b % 2 != 0) sum = sum + b;
	if( c % 2 != 0) sum = sum + c;
	if( d % 2 != 0) sum = sum + d;
	if( e % 2 != 0) sum = sum + e;
	if( f % 2 != 0) sum = sum + f;

     cout << "Sum = " << sum ;
}