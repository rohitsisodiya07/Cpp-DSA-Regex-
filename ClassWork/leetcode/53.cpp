#include <bits/stdc++.h>
using namespace std ;

int main() {

        vector <int> v = {-2,1,-3,4,-1,2,1,-5,4} ;
        int sum = 0 ;
        int maxSum = INT_MIN ;
        for( auto ch : v){

            sum += ch ;
            maxSum = max(sum, maxSum) ;
            if( sum < 0 ) sum = 0 ;
        }
        cout << "Maximum Sum = " << maxSum ;
}