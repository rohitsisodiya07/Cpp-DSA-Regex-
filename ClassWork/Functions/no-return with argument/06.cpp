#include<bits/stdc++.h>
using namespace std;

 void pallindrome(int n){
        
        int rev = 0 ;
        int temp = n ;
        while(n){
            int digit = n % 10 ;
            rev = rev * 10 + digit ;
            n /= 10 ;
        }
        if( rev == temp ) cout << "Pallindrome" ;
        else cout << "Not Pallindrome" ;
    }
    
int main()
{
    int n ;
    cout << "Enter Number = " ;
    cin >> n ;
    pallindrome(n) ;
}