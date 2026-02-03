// 1.Write a function to add two numbers and return the sum.

#include<bits/stdc++.h>
using namespace std;

int getsum(int a, int b){
    
    return a+b ;
}

int main(){
    
    int a, b ;
    cout << "Enter a and b = " ;
    cin >> a >> b ;
    cout <<"Sum = "<<getsum(a, b) ;
}