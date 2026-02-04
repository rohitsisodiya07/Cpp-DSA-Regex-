#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] == v[i + 1])
        {
            ans.push_back(v[i]);
        }
    }
    for (auto ch : ans)
        cout << ch << " ";
}