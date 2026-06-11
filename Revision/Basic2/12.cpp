// Find the element that appears only once.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 2, 1, 4, 4};

    int ans = 0;

    for (auto ch : v)
    {

        ans ^= ch;
    }

    cout << ans;
}