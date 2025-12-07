#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, rev = 0;
	cout << "Enter Number = ";
	cin >> n ;
	while ( n > 0){
	    int digit  = n % 10 ;
	    sum = sum + digit ;
	    rev = rev * 10 + digit ;
	    n = n / 10 ;
	}
	cout << "Reverse = " << rev << endl;
	cout << "Sum = " << sum ;
}