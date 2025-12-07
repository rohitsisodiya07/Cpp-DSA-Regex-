#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Power - 6
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    while ( num % 6 == 0){
        
        num = num / 6 ; 
    }
    if( num == 1) cout << "Power of 6";
    else cout << "Not Power of 6" ;
}