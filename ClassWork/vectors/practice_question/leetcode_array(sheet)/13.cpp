// 442. Find All Duplicates in an Array

#include <bits/stdc++.h>
using namespace std;

int main()
{

    //Using Sort() [Best Approach].
    vector<int> v = {4,3,2,7,8,2,3,1};
    vector <int> ans ;
    sort(v.begin(), v.end()) ;
    for( int i = 0 ; i < v.size()-1 ; i++){

            if( v[i] == v[i+1] ) ans.push_back(v[i]) ;
    }
    for( auto ch : ans) cout << ch << " " ;



    //Using Set [ Not Optimized].
    // vector<int> v = {4,3,2,7,8,2,3,1};
    // vector <int> ans ;
    // set <int> s;
    // for( auto ch : v){

    //         if( s.count(ch)){
    //             ans.push_back(ch) ;
    //         }
    //         else{
    //                 s.insert(ch) ;
    //         }
    //     }
    //     for( auto ch : ans ) cout << ch << " ";


    //Using Map [Not Optimized].

    // vector<int> v = {4,3,2,7,8,2,3,1};
    // vector <int> ans ;
    // map <int, int> m;
    // for( auto ch : v) m[ch]++ ;
    // for( auto ch : m){

    //         if(ch.second > 1) ans.push_back(ch.first) ;
    // }
    // for( auto ch : ans ) cout << ch << " ";

 

    //BrootForce Approach [Time Limit Exceed]

    // vector<int> v = {4,3,2,7,8,2,3,1};
    // vector <int> ans ;
    // for( int i = 0 ; i < v.size() ; i++){

    //         for( int j = i+1 ; j < v.size() ; j++){

    //             if( v[i] == v[j] ) ans.push_back(v[i]) ;
    //         }
    // }
    // for( auto ch : ans ) cout << ch << " " ;

}