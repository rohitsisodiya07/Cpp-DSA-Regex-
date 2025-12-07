#include<bits/stdc++.h>
using namespace std;

void digitsum( int n){
        
        int last, sum = 0;
        while(n){
            last = n % 10 ;
            sum = sum + last ;
            n /= 10 ;
        }
        cout << "Sum of Digits = " << sum ;
    }

int main()
{
    int n ;
    cout << "Enter Number = " ;
    cin >> n ;
    digitsum(n) ;
}