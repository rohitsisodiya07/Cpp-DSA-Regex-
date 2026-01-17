// Sort an array in descending order.


#include<bits/stdc++.h>
using namespace std ;

int main(){

    // vector <int> v = {4,6,5,8,2,3,7,1} ;
    // for(int i = 0 ; i < v.size() ; i++){
        
    //     for( int j = i+1 ; j < v.size() ; j++){
        
    //         if( v[i] < v[j] ) swap(v[i], v[j]) ;
    //     }
    // }
    // for( auto ch : v) cout << ch << " " ;
    
    // Using Sort-Method 
    vector <int> v = {4,6,5,8,2,3,7,1} ;
    sort(v.begin(), v.end()) ;
    reverse(v.begin(), v.end()) ;
    for( auto ch : v) cout << ch << " " ;

}