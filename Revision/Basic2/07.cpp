// Find the frequency of each element.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 1, 3, 2, 1};
    unordered_map<int, int> m;
    for (auto ch : v)
    {
        m[ch]++;
    }
    for (auto ch : m)
    {
        cout << ch.first << "->" << ch.second << endl;
    }
}