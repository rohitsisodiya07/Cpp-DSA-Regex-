// Write a program to find the frequency of each character in a string.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "apple";
    unordered_map<char, int> m;

    for (auto ch : str)
    {
        m[ch]++;
    }
    for (auto ch : m)
    {
        cout << ch.first << "-" << ch.second << endl;
    }
}
