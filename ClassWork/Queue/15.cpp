// Check Queue is Pallindrome or Not.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    vector<int> v;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(2);
    q.push(1);
    while (!q.empty())
    {

        v.push_back(q.front());
        q.pop();
    }
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {

        if (v[i] != v[j])
        {
            cout << "Not Pallindrome";
            return 0;
        }
        i++ ;
        j-- ;
    }
    cout << "Pallindrome";
}