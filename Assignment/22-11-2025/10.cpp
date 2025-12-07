#include<bits/stdc++.h>
using namespace std;

int main()
{
	 //Power - 8
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    while ( num % 8 == 0){
        
        num = num / 8 ; 
    }
    if( num == 1) cout << "Power of 8";
    else cout << "Not Power of 8" ;
}