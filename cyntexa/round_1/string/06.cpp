// Convert lowercase to uppercase.

#include <bits/stdc++.h>
using namespace std;

void convertUpper(string str)
{
    string ans = "";
    for (auto ch : str)
    {

        if (ch >= 97 && ch <= 123)
        {

            ans += (ch - 32);
        }
        else
            ans += ch;
    }
    cout << ans;
}

int main()
{

    string str = "Rohit Sisodiya";
    convertUpper(str);
}