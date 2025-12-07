#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str ;
	cout << "Enter String =";
	cin >> str ;
	    int a = str.length() / 2 ;
	for(int i=a-1;i<a+2;i++)
	{
	    cout<<str[i];
	}
}