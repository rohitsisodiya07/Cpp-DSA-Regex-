#include<bits/stdc++.h>
using namespace std;

int main()
{	
  	int num, temp, rev = 0;
	cout << "Enter Number = ";
	cin >> num;
	temp = num ;
	while( num != 0 ){
	    int digit = num % 10 ;
	    rev =  rev * 10 + digit ;
	    num = num / 10 ;
	}
	if( temp == rev ) cout << "Number is Pallindrome" ;
	else cout << "Number is not Pallindrome" ;
}