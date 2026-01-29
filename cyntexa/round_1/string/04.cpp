// Remove spaces from string.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Ro hi t S iso d i y a";
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] != ' ')
            ans += str[i];
    }
    cout << ans;
}