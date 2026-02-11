// Return Size of Stack.

#include <bits/stdc++.h>
using namespace std;
void countStack(stack<int> s, int &count)
{

    if (s.empty())
        return;

    count++;
    s.pop();
    countStack(s, count);
}

int main()
{

    stack<int> s;
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(18);
    s.push(18);
    int count = 0;

    countStack(s, count);
    cout << "Count = " << count;
}