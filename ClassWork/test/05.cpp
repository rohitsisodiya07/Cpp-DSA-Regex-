#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Fibonacci Series
    int a = 0, b = 1, c, n;
	cout << "Enter Number = ";
	cin >> n;
	cout << a << "\t";
	cout << b << "\t";
	for( int i = 2 ; i < n ; i++){

	    c = a + b;
	    a = b ;
	    b = c ;
	    cout << c << "\t" ;
	}
}