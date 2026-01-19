// 2011. Final Value of Variable After Performing Operations.

#include <bits/stdc++.h>
using namespace std;

int main(){

   vector <string> operations = {"--X","X++","X++"} ;

    int ans = 0 ;
    for( auto ch : operations){

        if( ch == "X++" || ch == "++X") ans++;
        else ans-- ;
    }
    cout << "After Perform Operation = " << ans ;
}