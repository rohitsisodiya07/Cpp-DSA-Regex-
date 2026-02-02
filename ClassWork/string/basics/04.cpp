// Convert lowercase to uppercase and upper to lower.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Rohit Sisodiya";
    string ans;
    for (auto ch : str)
    {
        if (islower(ch))
        {
            ans += toupper(ch);
        }
        else
        {
            ans += tolower(ch);
        }
    }
    for (auto ch : ans)
        cout << ch << " ";
}