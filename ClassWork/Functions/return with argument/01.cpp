#include<bits/stdc++.h>
using namespace std;

int checkeven(int num){
            
            if( num % 2 == 0) return 1 ;
            else return 0 ;
        }

int main()
{
   	    int num ;
        cout << "Enter Number = " ;
        cin >> num ;
        if(checkeven(num)) cout << "Number is Even" ;
        else cout << "Number is Odd" ;
}