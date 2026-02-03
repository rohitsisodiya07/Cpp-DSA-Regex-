// 2. Write a function to find the maximum of two numbers.

#include<bits/stdc++.h>
using namespace std;

int getmax(int a, int b){
    
    return max(a, b) ;
}

int main(){
    
    int a, b ;
    cout << "Enter a = " ;
    cin >> a ;
    cout << "Enter b = " ;
    cin >> b ;
    cout <<"Max = "<<getmax(a, b) ;
}