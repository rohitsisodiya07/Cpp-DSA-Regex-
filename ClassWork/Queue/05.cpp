//Reverse Using Vector.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    vector <int> v ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while (!q.empty())
    {

        v.push_back(q.front()) ;
        q.pop() ;
    }

    reverse(v.begin(), v.end()) ;
    for( auto ch : v) cout << ch << " " ;
}