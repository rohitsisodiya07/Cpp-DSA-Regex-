// 8 Rotate array elements by 1 position to the left.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    if (v.size() == 0)
    {
        cout << "Invalid or Emplty Vector";
    }
    int num = v[0];
    for (int i = 0; i < v.size() - 1; i++)
    {
        v[i] = v[i + 1];
    }
    v[v.size() - 1] = num;
    for (auto ch : v)
    {
        cout << ch << ' ';
    }
}