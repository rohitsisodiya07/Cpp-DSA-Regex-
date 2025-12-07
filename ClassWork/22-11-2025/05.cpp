#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Power - 2
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    while ( num % 2 == 0){
        
        num = num / 2 ; 
    }
    if( num == 1) cout << "Power of 2";
    else cout << "Not Power of 2" ;
}