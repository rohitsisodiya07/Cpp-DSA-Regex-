// Count Even Values in Vector By Recursion.

#include <bits/stdc++.h>
using namespace std;
void countNum(vector<int> v, int &even, int i){

        if( i == v.size()) return;
        if(v[i] % 2 == 0 ) even += 1 ;

        countNum(v, even, i+1) ;
}

int main()
{

    vector <int> v = {10, 20, 30, 40, 55} ;
    int i = 0 ;
    int even = 0 ;
    countNum(v, even, i) ;
    cout << "Even Numbers = " << even ;

}
