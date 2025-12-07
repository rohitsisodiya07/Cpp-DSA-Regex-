#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a = 'R' ;
	char b = 'o' ;
	char c = 'h' ;
	char d = 'i' ;
	char e = 't' ;

	string self="";
	self = self + a ;
	self = self + b ;
	self = self + c ;
	self = self + d ;
	self = self + e ;

	cout << "Self Input String = " << self << endl ;
	int selflen = self.length();

	string user;
	cout << "Enter User String = " ;
	cin >> user ;
	int num ;
	cout << "Enter Number = " ;
	cin >> num ;
	int userlen = user.length();

	while( num % 5 == 0 ) {

		if( selflen == userlen ) {

			sort(self.begin(), self.end());
			sort(user.begin(), user.end());

			int temp = 0 ;
			for ( int i = 0 ; i <= selflen ; i++) {


				if( user[i] != self[i] ) {
					temp = 1 ;
				}

			}
			if( temp == 0) cout << "Length and Characters are Same" << endl;
			else cout << "Length are Same but Characters are Different" << endl;
		}
		else if( userlen > selflen ) {
			cout << self[2] << endl;
		}
		else {
			string add = self + user ;
			cout << add << endl ;
		}

		num = num / 5 ;
	}
}