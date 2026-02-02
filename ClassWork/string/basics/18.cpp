// String to LowerCase.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Rohit";
    string ans = "";
    for (auto ch : str)
    {

        if (isupper(ch))
        {
            ans += tolower(ch);
        }
        else
            ans += ch;
    }
    for (auto ch : ans)
        cout << ch << " ";
}