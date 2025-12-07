#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Power - 3
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    while ( num % 3 == 0){
        
        num = num / 3 ; 
    }
    if( num == 1) cout << "Power of 3";
    else cout << "Not Power of 3" ;
}