//7. Write a function to calculate the simple interest. (Formula: SI = (P × R × T) / 100).

#include<bits/stdc++.h>
using namespace std ;

float calculatesi(float p, float r, float t){
    
    return (p*r*t/100) ;
}

int main(){
    
    float p, r, t;
    cout << "Enter p = " ;
    cin >> p ;
    cout << "Enter r = " ;
    cin >> r ;
    cout << "Enter t = " ;
    cin >> t ;
    cout << "Simple Interest = " << calculatesi(p, r, t) ;
}