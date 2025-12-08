#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int num, temp = 0;
	cout << "Enter Number = " ;
	cin >> num ;
	for( int i = 1 ; i*i <= num ; i++){
	    if( i*i == num ) {
	        temp = 1 ;
	        break ;
	    }
	}
	if( temp == 1 ) cout << "Number is Perfect Square";
	else cout << "Number is Not Perfect Square";

}