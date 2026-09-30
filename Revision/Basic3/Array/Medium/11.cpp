// 11 Find the maximum product of two elements in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {-6, 4, 1, 2, 3, 4, 5, -7};
    if (v.size() < 2)
    {
        cout << "Need at least 2 elements";
        return 0;
    }

    sort(v.begin(), v.end());
    int ans1 = v[0] * v[1];
    cout << ans1 << endl;
    int ans2 = v[v.size() - 1] * v[v.size() - 2];
    cout << ans2;

    if (ans1 > ans2)
    {
        cout << ans1;
    }
    else
    {
        cout << ans2;
    }
}
