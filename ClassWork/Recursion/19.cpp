// Return Size of Queue.

#include <bits/stdc++.h>
using namespace std;
void countQueue(queue<int> q, int &count)
{

    if (q.empty())
        return;

    count++;
    q.pop();
    countQueue(q, count);
}

int main()
{

    queue<int> q;
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);
    q.push(35);

    int count = 0;
    countQueue(q, count);
    cout << "Count = " << count;
}