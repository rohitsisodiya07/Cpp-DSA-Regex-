//1431. Kids With the Greatest Number of Candies

#include <bits/stdc++.h>
using namespace std;

int main(){

  vector <int> candy = {2, 3, 5, 1, 3} ;
  vector <bool> ans ;
  int extraCandies = 3 ;
  int largest = INT_MIN ;
  for( auto ch : candy) largest = max(ch, largest) ;
  for( auto ch : candy){

    if( ch + extraCandies >=  largest) ans.push_back(true) ;
    else ans.push_back(false) ;
  }
  for( auto ch : ans) cout << ch << " " ;
}