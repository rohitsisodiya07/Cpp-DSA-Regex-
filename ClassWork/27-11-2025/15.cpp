#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, prod = 1;
    cout << "Enter Number = " ;
    cin >> num ;
    for( ; num ; num /= 10){
        
        int digit = num % 10 ;
        prod = prod * digit ;
    }
    cout << "Product = " << prod ;
    //****************************************
    // int num, prod = 1;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // while(num){
        
    //     int digit = num % 10 ;
    //     prod = prod * digit ;
    //     num = num / 10 ;
    // }
    // cout << "Product = " << prod ;
    //*****************************************
    // int num, prod = 1;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // do{
        
    //     int digit = num % 10 ;
    //     prod = prod * digit ;
    //     num = num / 10 ;
    // }while(num);
    // cout << "Product = " << prod ;
}