#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Decimal to Hexa-Decimal
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    string str = "";
    while(num){
        
        
        str = to_string(num % 16) + str ;
        num = num / 16 ;
        
    }
    cout << str ;
}