#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, max = 0 ;
    cout << "Enter Number = " ;
    cin >> num ;
    while(num){
        int digit = num % 10 ;
        if( digit > max) max = digit ;
        num = num / 10 ;
    }
    cout << "Maximum = " <<max ;
}