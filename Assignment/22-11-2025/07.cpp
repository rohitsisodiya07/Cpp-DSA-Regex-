#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Power - 4
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    while ( num % 4 == 0){
        
        num = num / 4 ; 
    }
    if( num == 1) cout << "Power of 4";
    else cout << "Not Power of 4" ;
}