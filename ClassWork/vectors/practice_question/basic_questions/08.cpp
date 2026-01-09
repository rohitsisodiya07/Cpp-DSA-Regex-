// 8 Search for an element in an array (linear search).

#include<bits/stdc++.h>
using namespace std ;

int main(){

     vector<int> v = {1, 2, 3, -1, -2, -4, 5} ;
        int key = -5 ;
        for( auto ch : v){
            
            if( ch == key){
                cout << "Element Present" ;
                return 0 ;
            }
        }
        cout << "Element not Present" ;
}