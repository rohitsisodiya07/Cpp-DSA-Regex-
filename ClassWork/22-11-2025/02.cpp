#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Print Index No.
        
        string str ;
        cout << "Enter Your String = " ;
        cin >> str ;
        for( int i = 0 ; i < str.length() ; i++){
            
            cout << "Index " << i << " : "<< str[i]  << endl;
        }
}