// 4 Find the majority element (appears more than n/2 times).
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Optimal Solution
    vector<int> v = {5, 1, 5, 2, 3, 5, 5};
    sort(v.begin(), v.end()) ;
    cout << v[v.size()/2] ;

    

    //Using Vector

    // vector<int> v = {5, 1, 5, 2, 3, 5, 5};
    // int n = v.size();
    // map<int, int> m;
    // for (auto ch : v)
    //     m[ch]++;
    // for (auto ch : m)
    // {

    //     if (ch.second > n / 2)
    //     {
    //         cout << ch.first;
    //         return 0;
    //     }
    // }
}