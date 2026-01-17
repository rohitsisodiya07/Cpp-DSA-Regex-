// 2 Reverse the array without using another array.
#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v = {7, 8, 2, 5, 6, 4} ;
    int i = 0 ;
    int j = v.size()-1 ;
    while( i < j){

        swap(v[i], v[j]) ;
        i++ ;
        j-- ;        
    }
    for( auto ch : v) cout << ch << " " ;
}