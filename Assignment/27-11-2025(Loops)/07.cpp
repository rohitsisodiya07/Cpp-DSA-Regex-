#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num, rev = 0 ;
	cout <<"Enter Number = " ;
	cin >> num ;
	int temp = num ;
	while(num){
	    int lastdigit = num % 10 ;
	    rev = rev * 10 + lastdigit ;
	    num = num / 10 ;
	}
	cout << "Reverse = " << rev <<endl ;
	if( temp == rev ) cout << "Number is Pallindrome" ;
	else cout << "Number is Not Pallindrome" ;
    // **************************************************
    // int num, rev = 0 ;
	// cout <<"Enter Number = " ;
	// cin >> num ;
	// int temp = num ;
	// do{
	//     int lastdigit = num % 10 ;
	//     rev = rev * 10 + lastdigit ;
	//     num = num / 10 ;
	// }while(num);
	// cout << "Reverse = " << rev <<endl ;
	// if( temp == rev ) cout << "Number is Pallindrome" ;
	// else cout << "Number is Not Pallindrome" ;
}