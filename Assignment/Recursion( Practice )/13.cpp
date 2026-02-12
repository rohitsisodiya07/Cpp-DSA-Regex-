//Check if an array is sorted using recursion.

#include <bits/stdc++.h>
using namespace std;

bool checkSorted( vector <int> v, int i, int j){

        if( v[j] == v.size() || v[j] < v[i] ) return false ;
        return true ;
        return checkSorted(v, i+1, j+1) ;
}
int main()
{

    vector<int> v = {2, 6, 9, 12, 2, 25, 32, 40, 50};
    int i = 0 ;
    int j = 1 ;

    if(checkSorted(v, i, j)) cout<< "Yes" ;
    else "No" ;
}
