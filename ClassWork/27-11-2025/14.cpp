#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter Number = " ;
    cin >> num ;
    for( ; num ; ){
        
        int digit = num % 10 ;
        sum = sum + digit ;
        num = num / 10 ;
    }
    cout << "Sum = " << sum ;
    //**************************************
    // int num, sum = 0;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // while(num){
        
    //     int digit = num % 10 ;
    //     sum = sum + digit ;
    //     num = num / 10 ;
    // }
    // cout << "Sum = " << sum ;
    //*************************************
    // int num, sum = 0;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // do{
        
    //     int digit = num % 10 ;
    //     sum = sum + digit ;
    //     num = num / 10 ;
    // }while(num);
    // cout << "Sum = " << sum ;
}