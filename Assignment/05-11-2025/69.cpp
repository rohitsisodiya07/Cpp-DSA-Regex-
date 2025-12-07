#include<bits/stdc++.h>
using namespace std;

int main()
{	
    int num;
	cout << "Enter Number = ";
	cin >> num;
	if( num % 7 == 0 && num % 11 == 0) cout << "Yes" ;
	else cout << "No";
}