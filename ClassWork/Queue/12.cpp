//Delete First and Last Element odf Queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    stack <int> st ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.pop() ;
    while (!q.empty())
    {

        st.push(q.front()) ;
        q.pop();
    }
    st.pop() ;
    while (!st.empty())
    {

        q.push(st.top()) ;
        st.pop();
    }
    while (!q.empty())
    {

        cout << q.front() << endl ;
        q.pop();
    }
    
    
}