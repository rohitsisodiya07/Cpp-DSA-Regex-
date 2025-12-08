#include<bits/stdc++.h>
using namespace std;

void greetUser(string name) {
	cout << "Hello " << name ;
}

int main()
{
	string name;
	cout <<"Enter Your Name = " ;
	cin >> name ;
	greetUser(name);
}