#include<bits/stdc++.h>
using namespace std;

int main()
{	
 	int a, b, c, d, e, large;
	cout << "Enter Values = ";
	cin >> a >> b >> c >> d >> e ;
	large = a;
	if( large < b ) large = b;
	if( large < c ) large = c;
	if( large < d ) large = d;
	if( large < e ) large = e;

	cout << "Largest Number is = " << large ;
}