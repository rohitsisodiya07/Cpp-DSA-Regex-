// 7 Print the array in reverse order.
#include<bits/stdc++.h>
using namespace std ;

int main(){
  vector<int> v = {1, 2, 3, -1, -2, -4, 5} ;
        for( int i = v.size() - 1 ; i >= 0 ; i--){
            
            cout << v[i] << " " ;
        }
}

