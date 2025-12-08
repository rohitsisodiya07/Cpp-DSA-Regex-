#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, small;
	cout << "Enter Values = ";
	cin >> a >> b >> c >> d >> e;
	small = a;
	if( small > b ) small = b;
	if( small > c ) small = c;
	if( small > d ) small = d;
	if( small > e ) small = e;

	cout << "Smallest Number is = " << small ;
}