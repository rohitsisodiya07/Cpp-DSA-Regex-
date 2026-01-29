// Check if array is sorted

#include <bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v = {2, 4, 6, 7, 8, 10} ;
    bool check = true ;
    for( int i = 0 ; i < v.size() ; i++){

        if( v[i] > v[i+1]){
            check = false ;
            break ;
        }
    }
    if(check) cout << "Array is Sorted" ;
    else cout << "Array is Not Sorted" ;
}