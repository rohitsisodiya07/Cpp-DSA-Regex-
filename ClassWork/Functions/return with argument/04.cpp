#include<bits/stdc++.h>
using namespace std;

bool checkeven(int num){
            
            if( num % 2 == 0 ) return true ;
            else return false ;
        }

int main()
{
   	    int num ;
        cout << "Enter Number = " ;
        cin >> num ;
        if(checkeven(num)) cout << "Even" ;
        else cout << "Odd" ;
}