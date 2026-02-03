// 10. Write a function to reverse a given number.

#include<bits/stdc++.h>
using namespace std ;

int revNum(int num){
    
    int rev = 0 ;
    while(num){

        rev = rev*10 + (num%10) ;
        num = num / 10 ;
    }
    return rev ;
    
}

int main(){
    
    int  num ;
    cout << "Enter Number = " ;
    cin >> num ;
    cout << "Reversed Number = " << revNum(num) ;
}