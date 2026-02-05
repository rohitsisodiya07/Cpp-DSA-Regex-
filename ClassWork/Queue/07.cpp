//Print OnlySum of All Value.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int sum = 0 ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while (!q.empty())
    {

        sum += q.front() ;
        q.pop();
    }
    cout << "Sum =  " << sum ;
}