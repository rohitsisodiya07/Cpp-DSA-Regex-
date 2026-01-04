#include<bits/stdc++.h>
using namespace std ;


void checkAnagram(string str1, string str2) {

	sort(str1.begin(), str1.end()) ;
	sort(str2.begin(), str2.end()) ;

	if( str1 == str2 ) cout << "Anagram" ;
	else cout << "Not Anagram" ;

}
int main() {


	string s1 = "listen", s2 = "silent" ;
	checkAnagram(s1, s2) ;

}