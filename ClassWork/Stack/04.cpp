// 2.Take Two String s1 and s2 insert value of both string in stack and
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str1 = "Rohit";
    string str2 = "Sisodiya";
    string ans = "";
    stack<char> s;

    for (auto ch : str1)
        s.push(ch);
    for (auto ch : str2)
        s.push(ch);

    while (!s.empty())
    {

        ans += s.top();
        s.pop();
    }

    cout << ans;
}