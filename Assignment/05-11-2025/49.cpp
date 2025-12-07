#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1, str2, temp;
	cout << "Enter String 1 = ";
	cin >> str1;
	cout << "Enter String 2 = ";
	cin >> str2;
	temp = str1;
	str1 = str2;
	str2 = temp;
	cout << "String 1 = " << str1 << " String 2 = "<< str2;
}