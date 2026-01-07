// 4. Write a function to check whether a number is even or odd.

#include<bits/stdc++.h>
using namespace std;

void checkEven(int num){
    
    if( num % 2 == 0) cout << "Even" ;
    else cout << "Odd" ;
}

int main(){
    
    int num;
    cout << "Enter Number = " ;
    cin >> num ;
    checkEven(num) ;
}