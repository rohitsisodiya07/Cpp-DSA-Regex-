#include<bits/stdc++.h>
using namespace std;

string checkeven(int num){
            
            if( num % 2 == 0 ) return "Even" ;
            else return "Odd" ;
        }

int main()
{
   	    int num ;
        cout << "Enter Number = " ;
        cin >> num ;
        cout << checkeven(num) ;
}