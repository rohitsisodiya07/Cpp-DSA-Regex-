//Return Minimum Value of Queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int mini = INT_MAX ;
    q.push(10);
    q.push(22);
    q.push(3);
    q.push(41);
    q.push(50);

    while (!q.empty())
    {

        mini = min(mini, q.front()) ;
        q.pop();
    }
    cout << "Minimum = " << mini ;
    
}