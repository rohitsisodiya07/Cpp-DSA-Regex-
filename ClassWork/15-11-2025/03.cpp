#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum = 0 ;
	cout << "Enter Number = " ;
	cin >> n ;
	int i = 1, j = n ;
	
	while( i < j)
	{
	    sum += i + j;
	    i++;
	    j--;
	    if( i == j ){
	        sum = sum + i;
	    }
	}
	cout << "Sum = " << sum ;

}