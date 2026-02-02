// String to LowerCase.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Rohit!@#$%^&*()Sisodiya";
    string ans = "";
    for (auto ch : str)
    {

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ans += ch;
        }
    }
    for (auto ch : ans)
        cout << ch;
}