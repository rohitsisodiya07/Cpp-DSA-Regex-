// 2 Find the largest element in an array.
#include<bits/stdc++.h>
using namespace std ;

int main(){
     vector <int> v ={10, 15, 12, 55, 12, 32} ;
        int ans = INT_MIN ;
        for( auto x : v){
            
            ans = max(x, ans) ; // if( x > max) max = x ; 
        }
        cout <<"Maximum = " << ans ;
}

