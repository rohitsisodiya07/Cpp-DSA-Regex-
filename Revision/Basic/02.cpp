// Write a program to check whether two strings are anagrams or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string str1 = "listen";
    // string str2 = "silent";

    // sort(str1.begin(), str1.end());
    // sort(str2.begin(), str2.end());

    // if (str1 == str2)
    //     cout << "Anagram";
    // else
    //     cout << "Not Anagram";

    // Using Map
    string str1 = "listen";
    string str2 = "silent";

    unordered_map<char, int> m;
    for (auto ch : str1)
    {
        m[ch]++;
    }
    for (auto ch : str2)
    {
        m[ch]--;
    }
    for (auto ch : m)
    {

        if (ch.second != 0)
        {
            cout << "Not Anagram";
            return 0;
        }
    }
    cout << "Anagram";
}