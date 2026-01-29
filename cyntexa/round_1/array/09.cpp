// Find duplicate element.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 25, 32, 10, 21, 30, 4, 30, 10, 21};
    map<int, int> m;
    vector<int> ans;
    for (auto ch : v)
        m[ch]++;
    for (auto ch : m)
    {

        if (ch.second > 1)
        {
            ans.push_back(ch.first);
        }
    }
    for (auto ch : ans)
        cout << ch << " ";
}