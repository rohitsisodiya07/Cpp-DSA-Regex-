#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, temp;
	cout << "Enter a = " ;
	cin >> a ;
	cout << "Enter b = " ;
	cin >> b ;
	temp = a;
	a = b;
	b = temp;
	cout << "a = "<< a << " b = "<< b ;
}