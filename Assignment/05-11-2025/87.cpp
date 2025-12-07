#include<bits/stdc++.h>
using namespace std;

int main()
{	
 	string str;
	int count = 0;
	cout << "Enter String = ";
	cin >> str;
	for( int i = str.length()-1 ; i >= 0 ; i--) {

		if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			count++;
		}
	}
	cout << " " << count << " Vowels Present" ;
}