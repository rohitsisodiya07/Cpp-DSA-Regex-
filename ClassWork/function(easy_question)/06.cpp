//6.Write a function to swap two numbers using call by value.

#include<bits/stdc++.h>
using namespace std;

void swapNum(int a, int b){
    
    swap(a, b) ;
    cout << "a = "<< a << " "<< "b = "<< b ;
}

int main(){
    
    int a, b ;
    cout << "Enter a = " ;
    cin >> a ;
    cout << "Enter b = " ;
    cin >> b ;
    swapNum(a, b) ;
}