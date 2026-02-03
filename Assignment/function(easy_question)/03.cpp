// 3. Write a function to calculate the square of a number.

#include<bits/stdc++.h>
using namespace std;

int getsquare(int a){
    
    return a*a ;
}

int main(){
    
    int a;
    cout << "Enter a = " ;
    cin >> a ;
    cout <<"Square = "<<getsquare(a) ;
}