#include<bits/stdc++.h>
using namespace std;

int main()
{
	//HCF[G.C.D]
	int a, b;
	cout << "Enter Numbers = ";
	cin >> a >> b ;
	int c;
	while(a){
	    c = b % a;
	    b = a;
	    a = c;
	}
	cout << b ;
}