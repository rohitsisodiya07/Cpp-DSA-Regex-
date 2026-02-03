// 704. Binary Search
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {-1,0,3,5,9,12} ;
    int target = 19 ;
    int left = 0 ;
    int right = v.size()-1 ;
    int mid ;
    while( left <= right){

            mid = (left+right)/2 ;
            if( v[mid] == target){
                cout << "Found" ;
                return 0 ;
            }
            else if ( target > v[mid]) left = mid + 1 ;
            else if( target < v[mid]) right = mid - 1 ; 
    }
    cout << "Not Found " ;
    
}