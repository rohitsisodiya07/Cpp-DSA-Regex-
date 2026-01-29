// First Non-Repeating Character in String.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "rohit sisodiyarh";
    map<char, int> m;
    for (auto ch : str)
    {

        if (ch != ' ')
            m[ch]++;
    }
    for (auto ch : m)
    {

        if (ch.second == 1)
        {
            cout << ch.first;
            return 0;
        }
    }
    cout << "Not Present";
}