// 6 Count how many positive and negative numbers are in an array.
#include<bits/stdc++.h>
using namespace std ;

int main(){
   vector<int> v = {1, 2, 3, -1, -2, -4, 5} ;
        int poscount = 0 ;
        int negcount = 0 ;
        for( auto x : v){
            
            if( x >= 0) poscount++ ;
            else negcount++ ;
        }
        cout << "Positive Number = " << poscount <<endl ;
        cout << "Negative Number = " << negcount <<endl ;
}

