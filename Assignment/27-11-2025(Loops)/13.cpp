#include<bits/stdc++.h>
using namespace std;

int main()
{
   int num, power ;
    cout << "Enter Number = " ;
    cin >> num ;
    cout << "Enter Power = " ;
    cin >> power ;
    int temp = 1 ;
    for( int i = 0 ; i < power ; i++){
        
        temp = temp * num;
    }
    cout << "Result = " << temp ;
    //**************************************
    // int num, power ;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // cout << "Enter Power = " ;
    // cin >> power ;
    // int temp = 1 ;
    // int i = 0 ;
    // while(i < power){
        
    //     temp = temp * num;
    //     i++;
    // }
    // cout << "Result = " << temp ;
    //***************************************
    // int num, power ;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // cout << "Enter Power = " ;
    // cin >> power ;
    // int temp = 1 ;
    // int i = 0 ;
    // do{
        
    //     temp = temp * num;
    //     i++;
    // }while(i < power);
    // cout << "Result = " << temp ;
    
}