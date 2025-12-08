#include<bits/stdc++.h>
using namespace std;

void printMax(int a, int b){
    if( a > b) cout <<"a is larger";
    else cout <<"b is larger" ;
}

int main()
{
	int a, b ;
	cout <<"Enter a and b = " ;
	cin >> a >> b ;
	printMax(a, b);
}