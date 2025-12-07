#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, rev = 0, count = 0;
	cout << "Enter Number = " ;
	cin >> num ;
	int temp = num ;
	while(temp){
	    int last = temp % 10 ;
	    if( last == 0 ){
	        count++ ;
	        temp /= 10 ;
	    }
	    else break ;
	}
	while(num){
	    int digit = num % 10 ;
	    rev = rev * 10 + digit ;
	    num /= 10 ;
	}
	for( int i = 0 ; i < count ; i++){
	    cout << "0" ;
	}
	cout << rev ;
}