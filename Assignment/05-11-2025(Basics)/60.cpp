#include<bits/stdc++.h>
using namespace std;

int main()
{	
  	int a, b, c, d, e, f, large;
	cout << "Enter Values = ";
	cin >> a >> b >> c >> d >> e >> f;
	large = a;
	if( large < b ) large = b;
	if( large < c ) large = c;
	if( large < d ) large = d;
	if( large < e ) large = e;
	if( large < f ) large = f;

	cout << "Largest Number is = " << large ;
}