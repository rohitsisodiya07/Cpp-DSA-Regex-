#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    // Unique and Sorted 
    set <int> s ;
    int value ;
    for( int i = 0 ; i < 5 ; i++){
        cout << "Enter Value = " ;
        cin >> value ;
        s.insert(value) ;
    }
    for( auto x : s) cout << x << " " ;
    
    // Unordered Set = Unique and Unsorted
    unordered_set <int> s ;
    int value ;
    for( int i = 0 ; i < 5 ; i++){
        cout << "Enter Value = " ;
        cin >> value ;
        s.insert(value) ;
    }
    for( auto x : s) cout << x << " " ;

}