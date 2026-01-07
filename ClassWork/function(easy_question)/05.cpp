//5. Write a function that takes a number and returns its factorial.

#include<bits/stdc++.h>
using namespace std;

int getfact(int num){
    
    int fact = 1 ;
    while(num){
        fact *= num ;
        num-- ;
    }
    return fact ;
}

int main(){
    
    int num;
    cout << "Enter Number = " ;
    cin >> num ;
    cout<< "Factorial = " << getfact(num) ;
}