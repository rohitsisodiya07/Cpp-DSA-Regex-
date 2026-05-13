// Write a program to find the first non-repeating character in a string

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "aabbcddee";
    unordered_map<char, int> m;

    for (auto ch : str)
    {
        m[ch]++;
    }
    for (auto ch : str)
    {

        if (m[ch] == 1)
        {
            cout << "First Non Repeating Char =" << ch;
            return 0;
        }
    }
    cout << "Not any char";
}