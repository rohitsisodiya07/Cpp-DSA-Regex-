#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, sub;
	cout << "Enter a and b = ";
	cin >> a >> b ;
	sub = a - b;
	if( sub < 0 ) sub = sub * (-1);
	cout << "Substract = " << sub ;
}