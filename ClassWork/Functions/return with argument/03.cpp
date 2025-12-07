#include<bits/stdc++.h>
using namespace std;

char checkeven(int num){
            
            if( num % 2 == 0 ) return 'e' ;
            else return 'o' ;
        }

int main()
{
   	    int num ;
        cout << "Enter Number = " ;
        cin >> num ;
        if(checkeven(num) == 'e') cout << "Number is Even" ;
        else cout << "Number is Odd" ;
}