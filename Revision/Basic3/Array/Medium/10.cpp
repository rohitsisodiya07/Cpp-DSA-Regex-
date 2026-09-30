// 10 Merge two arrays into a third array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};

    vector<int> v3 = v1;
    for (auto ch : v2)
    {
        v3.push_back(ch);
    }
    for (auto ch : v3)
    {
        cout << ch << ' ';
    }
}
