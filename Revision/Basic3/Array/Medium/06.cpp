// 6 Sort an array in ascending order (any method).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 8, 6, 7, 4, 5};
    sort(v.begin(), v.end());
    for (auto ch : v)
    {
        cout << ch << " ";
    }
}