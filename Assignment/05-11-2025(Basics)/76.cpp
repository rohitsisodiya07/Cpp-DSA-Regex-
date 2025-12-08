#include<bits/stdc++.h>
using namespace std;

int main()
{	
 	int num1, num2, i = 2, hcf = 1;
	cout << "Enter Numbers = ";
	cin >> num1 >> num2 ;
	while( num1 > 1 || num2 > 1 ){
	    if( num1 % i == 0 || num2 % i == 0 ){

	        if( num1 % i == 0 && num2 % i == 0 ) hcf = hcf * i ;

	        if( num1 % i == 0 ) num1 = num1 / i ;
	        if( num2 % i == 0 ) num2 = num2 / i ;

	        cout << i << endl;
	    }
	    else i++;
	}
	cout << "G.C.D = " << hcf ;
}