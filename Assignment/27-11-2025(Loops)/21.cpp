#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, count = 0 ;
	cout << "Enter Number = " ;
	cin >> num ;
	while(num){
	    int digit = num % 10 ;
	    if( digit == 8 ) count++;
	    num = num / 10 ;
	}
	cout << "Count = " << count ;
}