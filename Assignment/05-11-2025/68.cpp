#include<bits/stdc++.h>
using namespace std;

int main()
{	
     string str1, str2;
    cout<< "Enter String = ";
    cin >> str1 >> str2 ;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if( str1 == str2 ) cout << "Strings are Anagrams";
    else cout << "Strings are Not Anagrams";
}