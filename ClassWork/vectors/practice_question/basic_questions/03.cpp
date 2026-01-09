// 3 Find the smallest element in an array.
#include<bits/stdc++.h>
using namespace std ;

int main(){
     vector <int> v ={10, 15, 12, 55, 12, 32} ;
        int ans = INT_MAX ;
        for( auto x : v){
            
            ans = min(x, ans); // if( min > x) min = x ;
        }
        cout <<"Minimum = " << ans ;
}

