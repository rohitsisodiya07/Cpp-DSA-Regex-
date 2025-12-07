#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int num, rev = 0, count = 0 ;
	cout <<"Enter Number = " ;
	cin >> num ;
	int temp = num ;
	while(temp){
	    int last = temp % 10 ;
	    if( last == 0){
	        temp = temp / 10 ;
	        count++ ;
	    }
	    else break ;
	}
	while(num){
	    int lastdigit = num % 10 ;
	    rev = rev * 10 + lastdigit ;
	    num = num / 10 ;
	}
	cout << "Reverse = " ;
	for( int i = 0 ; i < count ; i++){
	    cout << "0";
	}
	cout  << rev ;
	//****************************************
	// int num, rev = 0, count = 0 ;
	// cout <<"Enter Number = " ;
	// cin >> num ;
	// int temp = num ;
	// do{
	//     int last = temp % 10 ;
	//     if( last == 0){
	//         temp = temp / 10 ;
	//         count++ ;
	//     }
	//     else break ;
	// }while(temp);

	// do{
	//     int lastdigit = num % 10 ;
	//     rev = rev * 10 + lastdigit ;
	//     num = num / 10 ;
	// }while(num);

	// cout << "Reverse = " ;
	// for( int i = 0 ; i < count ; i++){
	//     cout << "0";
	// } 
	// cout  << rev ;
	
}