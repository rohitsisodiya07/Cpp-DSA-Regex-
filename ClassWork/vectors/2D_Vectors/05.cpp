// Check Target Present or Not. [Row]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<char>> v = {{'r', 'a', 'h', 'l'}, {'k', 'e', 'j', 'r'}, {'m', 'o', 'd', 'i'}, {'m', 'o', 'n', 'u'}};
    string target = "modi";
    for (auto x : v)
    {

        string ans = "";
        for (auto y : x)
        {

            ans += y;
        }
        if (ans == target)
        {
            cout << "true";
            return 0;
        }
    }
    cout << false;
}