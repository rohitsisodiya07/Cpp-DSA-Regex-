// 1920. Build Array from Permutation

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {0, 2, 1, 5, 3, 4};
    vector<int> ans(v.size());
    for (int i = 0; i < v.size(); i++)
    {

        ans[i] = v[v[i]];
    }
    for (auto ch : ans)
        cout << ch << " ";
}