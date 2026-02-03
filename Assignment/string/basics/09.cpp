// Remove Space and add @.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "R o h i t  S i s o d i y a";
    string ans;
    for (auto ch : str)
    {
        if (ch != ' ')
            ans += ch;
        else
            ans += '@';
    }
    for (auto ch : ans)
        cout << ch;
}