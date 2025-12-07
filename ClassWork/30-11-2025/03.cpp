#include<bits/stdc++.h>
using namespace std;

int main()
{	
   	//Tetranacci Series
	int a = 0, b = 0, c = 0, d = 1, e, num;
	cout <<"Enter Number = ";
	cin >> num ;
	cout << a << " " << b << " "  << c << " " << d << " ";
	for( int i = 4 ; i < num ; i++ ){

	    e = a + b + c + d ;
	    a = b ;
	    b = c ;
	    c = d ;
	    d = e ;
	    cout << e << " ";
	}
}