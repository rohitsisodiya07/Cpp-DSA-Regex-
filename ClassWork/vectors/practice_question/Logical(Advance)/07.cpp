// 7 Print all unique elements of an array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1, 2, 1, 2, 3, 6, 5, 7, 8, 8, 9, 4 ,5} ;
    map <int, int> m ;
    for( auto ch : v) m[ch]++ ;
    for( auto ch : m){
        if(ch.second == 1) cout << ch.first << " ";
    }
}