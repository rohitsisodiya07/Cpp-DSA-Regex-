//Return Maximum of Queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int maxi = INT_MIN ;
    q.push(10);
    q.push(22);
    q.push(30);
    q.push(41);
    q.push(5);

    while (!q.empty())
    {

        maxi = max(maxi, q.front()) ;
        q.pop();
    }
    cout << "Maximum =  " << maxi ;
}