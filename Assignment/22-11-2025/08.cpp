#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Power - 5
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    while ( num % 5 == 0){
        
        num = num / 5 ; 
    }
    if( num == 1) cout << "Power of 5";
    else cout << "Not Power of 5" ;
}