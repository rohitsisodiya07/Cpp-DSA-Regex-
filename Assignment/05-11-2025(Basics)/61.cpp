#include<bits/stdc++.h>
using namespace std;

int main()
{	
  	int num, prime = 0;
	cout << "Enter Number = " ;
	cin >> num;
	int i = 2;
	while ( i < num ){
	    if( num % i == 0){
	        prime = 1;
	        break;
	    }
	    else i++;

	}
	if (prime == 0) cout << "Prime Number" ;
	else cout <<"Not Prime Number";
}