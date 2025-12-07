#include<bits/stdc++.h>
using namespace std;

int main()
{	
    //Fibonacci Series
	int a = 0, b = 1, c, num;
	cout <<"Enter Number = ";
	cin >> num ;
	cout << a << " " << b << " " ;
	for( int i = 2 ; i < num ; i++ ){

	    c = a + b ;
	    a = b ;
	    b = c ;
	    cout << c << " ";
	}
}