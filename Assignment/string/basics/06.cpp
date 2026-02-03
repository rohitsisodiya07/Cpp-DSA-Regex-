// Count Frequency.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Rohit Sisodiya";
    map<char, int> m;
    for (auto ch : str)
    {
        m[ch]++;
    }
    for (auto ch : m)
        cout << ch.first << " => " << ch.second << endl;
}