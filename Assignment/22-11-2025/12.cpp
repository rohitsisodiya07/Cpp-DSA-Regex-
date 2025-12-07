#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Decimal to Binary 
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    string str = "";
    while(num){
        
        
        str = to_string(num % 2) + str ;
        num = num / 2 ;
        
    }
    cout << str ;
}