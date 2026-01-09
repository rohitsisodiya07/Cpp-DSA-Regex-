// 4 Calculate the sum of all elements in an array.
#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector <int> v ={10, 15, 12, 55, 12, 32} ;
        int sum = 0 ;
        for( auto x : v){
            
            sum += x ;
        }
        cout <<"Sum = " << sum ;
}

