//Functions of Stack

#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> s;
    s.push(1);
    s.push(3);
    s.pop();
    cout << "Size = " << s.size() << endl;
    s.push(3);
    cout << s.top() << endl;
    cout << s.empty();
}