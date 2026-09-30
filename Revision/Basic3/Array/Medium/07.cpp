// 7 Sort an array in descending order..

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 8, 6, 7, 4, 5};
    sort(v.begin(), v.end(), greater<int>());
    for (auto ch : v)
    {
        cout << ch << " ";
    }
}