// Check if two strings are anagrams.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 = "listen";
    string s2 = "silent";

    // Using an UnOrdered Map.

    unordered_map<char, int> mp;
    for (auto ch : s1)
    {
        mp[ch]++;
    }
    for (auto ch : s2)
    {
        mp[ch]--;
    }

    for (auto ch : mp)
    {

        if (ch.second != 0)
        {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
}