#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, fact = 1 ;
    cout << "Enter Number = ";
    cin >> n ;
    int i = 1, j = n;
    do{
      fact *= i * j;
        i++;
        j--;
        if(i == j) fact *= i ; 
    }while( i < j);
    cout << "Factorial = " << fact ;

}