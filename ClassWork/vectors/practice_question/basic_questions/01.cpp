// 1 Take 5 integers in an array from the user and print them.

#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector <int> v ;
    for(int i = 1 ; i <= 5 ; i++) {
        
        int value ;
        cout << "Enter Value = " ;
        cin >> value ;
        v.push_back(value) ;
    }
    for( auto x : v) cout << x  << " ";
}

