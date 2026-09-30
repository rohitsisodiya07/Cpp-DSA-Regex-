// 4 Remove duplicates from an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 2, 4, 5, 7, 9, 7, 3, 1, 6, 4, 8, 7, 2, 2};
    unordered_set<int> s(v.begin(), v.end());
    // for (auto ch : v)
    // {
    //     if (!(s.find(ch) != s.end()))
    //     {
    //         s.insert(ch);
    //     }
    // }
    for (auto ch : s)
    {
        cout << ch << " ";
    }
}
