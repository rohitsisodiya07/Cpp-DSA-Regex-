// Delete Middle  Element.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    vector<int> v;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int length = q.size();
    
    while (!q.empty())
    {

        v.push_back(q.front());
        q.pop();
    }
    for (int i = 0 ; i < v.size(); i++)
    {

        if (!(i == (length) / 2))
        {

            q.push(v[i]);
        }
    }
    while (!q.empty())
    {

        cout << q.front() << endl ;
        q.pop();
    }

}