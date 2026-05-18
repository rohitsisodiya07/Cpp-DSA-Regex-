//  Two Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {

        int ans = target - v[i];

        if (m.find(ans) != m.end())
        {
            cout << m[ans] << " " << i;;
            return 0;
        }
        m[v[i]] = i;
    }
}