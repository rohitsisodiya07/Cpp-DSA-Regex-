#include<bits/stdc++.h>
using namespace std;

int main()
{
	 //Decimal to Octal
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    string str = "";
    while(num){
        
        str = to_string(num % 8) + str ;
        num = num / 8 ;
    }
    cout << str ;
}