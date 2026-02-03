// String to UpperCase.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Rohit";
    string ans = "";
    for (auto ch : str)
    {

        if (islower(ch))
        {
            ans += toupper(ch);
        }
        else
            ans += ch;
    }
    for( auto ch : ans) cout << ch << " " ;
}