// 3 Count frequency of each element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 2, 4, 5, 7, 9, 7, 3, 1, 6, 4, 8, 7, 2, 2};
    map<int, int> m;
    for (auto ch : v)
    {
        if (m[ch])
        {
            m[ch]++;
        }
        else
        {
            m[ch] = 1;
        }
    }
    for (auto ch : m)
    {
        cout << ch.first << "->" << ch.second << endl;
    }
}
