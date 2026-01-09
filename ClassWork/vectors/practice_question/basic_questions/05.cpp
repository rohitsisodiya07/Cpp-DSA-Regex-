//5. Calculate the average of array elements.
#include<bits/stdc++.h>
using namespace std ;

int main(){
   vector <int> v ={10, 15, 12, 55, 12, 32} ;
        int average;
        int sum = 0 ;
        int count = 0 ;
        for( auto x : v){
            
            sum += x ;
            count++ ;
            
        }
        average = sum / count ;
        cout <<"Sum = " << sum <<endl;
        cout <<"Average = " << average ;
}

