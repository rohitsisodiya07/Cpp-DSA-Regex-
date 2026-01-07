// 9. Write a function to calculate the area of a circle. (Formula: Area = π × r × r)

#include<bits/stdc++.h>
using namespace std ;

float printArea(float r){
    
    return 3.14*r*r ;
    
}

int main(){
    
    float radius;
    cout << "Enter Radius = " ;
    cin >> radius ;
    cout << "Area of Circle = " << printArea(radius) ;
}