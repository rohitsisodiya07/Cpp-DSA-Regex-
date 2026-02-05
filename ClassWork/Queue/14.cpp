// Remove Duplicates Values From Queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    unordered_map<int, int> m;
    q.push(55);
    q.push(65);
    q.push(10);
    q.push(10);
    q.push(20);

    while (!q.empty())
    {

        m[q.front()]++;
        q.pop();
    }
    for (auto ch : m)
    {

        if (!(ch.second > 1))
        {

            q.push(ch.first);
        }
    }

    while (!q.empty())
    {

        cout << q.front() << " ";
        q.pop();
    }
}