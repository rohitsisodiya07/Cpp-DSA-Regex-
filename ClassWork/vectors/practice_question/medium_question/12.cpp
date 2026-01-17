// 12 Count even and odd numbers in an array.
#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v = {10, 2, 655, 5, 20, 5, 6, 87, 98, 101, 54} ;
    int even = 0;
    int odd = 0 ;
    for( auto ch : v){

        if( ch % 2 == 0) even++;
        else odd++ ;
    }
    cout << "Even = " << even <<endl;
    cout << "Odd = " << odd ;
}