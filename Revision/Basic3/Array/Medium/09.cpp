// 9 Rotate array elements by 1 position to the right.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    if (v.empty())
    {
        cout << "Invalid or Emplty Vector";
        return 0;
    }
    int num = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--)
    {
        v[i + 1] = v[i];
    }
    v[0] = num;
    for (auto ch : v)
    {
        cout << ch << ' ';
    }
}