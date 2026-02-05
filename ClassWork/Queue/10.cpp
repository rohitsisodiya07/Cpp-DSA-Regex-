//Count  Even and odd Value.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int even = 0 ;
    int odd = 0 ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while (!q.empty())
    {

        if( q.front() % 2 == 0) even++;
        else odd++ ;
        q.pop();
    }
    cout << "Even = " << even <<endl;
    cout << "Odd = " << odd ;
}