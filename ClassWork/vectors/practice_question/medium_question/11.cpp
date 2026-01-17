#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int> v = {2, 4, 5, 8, 15, 55, 66, -2 - 7 - 5, 10};
	sort(v.begin(), v.end()) ;
	int ans1 = v[0]*v[1] ;
	int ans2 = v[v.size()-1] * v[v.size()-2] ;
	cout << max(ans1, ans2) ;
}