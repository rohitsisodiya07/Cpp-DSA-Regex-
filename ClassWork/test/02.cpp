#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter Number = ";
	cin >> a >> b;
	int c;
	while(a){
	    c = b % a;
	    b = a;
	    a = c;
	}
	cout << "H.C.F = " << b << endl ;
	cout << "Output =" << b * 5;

}