#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	int flag=0;
	cout << "Enter String = ";
	cin >> s1;
	for ( char ch:s1){
	    if( ch == 'a' ||  ch == 'e' ||  ch == 'i' ||  ch == 'o' ||  ch == 'u' ){
	        flag = 1;
	        break;
	    }
	}
	if( flag == 1) cout << "Vowels Present";
	else  cout << "Vowels Not Present";
}