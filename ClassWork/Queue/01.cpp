#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.pop();
    cout << q.front() << endl;
    q.push(4);
    cout << q.back() << endl;
    cout << q.size();
}