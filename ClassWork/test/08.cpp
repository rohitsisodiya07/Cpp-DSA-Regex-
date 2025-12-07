#include<bits/stdc++.h>
using namespace std;

int main()
{
    	int num, rev = 0, count = 0;
	cout << "Enter Number = " ;
	cin >> num ;
	int temp = num ;
	while(temp) {
		int last = temp % 2 ;
		if( last == 0 ) {
			count++ ;
			temp /= 2 ;
		}
		else break ;
	}
	while(num) {
		int digit = num % 2 ;
		rev = rev * 2 + digit ;
		num /= 2 ;
	}
	for( int i = 0 ; i < count ; i++) {
		cout << "0" ;
	}
	cout << rev ;
}