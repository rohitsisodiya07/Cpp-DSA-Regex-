#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n, sum = 0 ;
	cout << "Enter Number = " ;
	cin >> n ;
	int i = 1, j = n ;
	do {
		sum =sum + i + j;
		i++;
		j--;
		 if( i == j ){
	        sum = sum + i;
	    }
	}while( i < j);
	cout << "Sum = " << sum ;

}