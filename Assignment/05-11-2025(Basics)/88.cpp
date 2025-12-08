#include<bits/stdc++.h>
using namespace std;

int main()
{	
 	   int num ; 
        cout << "Enter Number = ";
        cin >> num ;
        if( num % 4 == 0 ){
            
            if( num % 8 == 0 ) cout << "No Number is also Divisible by 8";
            else cout << "Number is Only Divisible By 4";
        }
}