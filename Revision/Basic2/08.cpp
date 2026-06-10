// Find the first non-repeating character..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "aabbcde";
    unordered_map<char, int> m;
    for (auto ch : str)
    {
        m[ch]++;
    }
    for (int i = 0; i < str.size(); i++)
    {

        if (m[str[i]] == 1)
        {
            cout << "First Non Repeating Character = " << str[i];
            return 0;
        }
    }
    cout << "Not Fouund";
}