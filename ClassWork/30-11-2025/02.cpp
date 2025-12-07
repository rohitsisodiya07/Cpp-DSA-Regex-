#include<bits/stdc++.h>
using namespace std;

int main()
{	
    // Tribonacci Series
	 int a = 0, b = 1, c = 1, d, num;
	cout <<"Enter Number = ";
	cin >> num ;
	cout << a << " " << b << " "  << c << " ";
	for( int i = 3 ; i < num ; i++ ){

	    d = a + b + c ;
	    a = b ;
	    b = c ;
	    c = d ;
	    cout << d << " ";
	}
}