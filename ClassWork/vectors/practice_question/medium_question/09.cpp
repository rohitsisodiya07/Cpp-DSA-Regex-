// 9 Rotate array elements by 1 position to the right.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {4, 9, 11, 10, 6};
    int temp = v[0];
    for (int i = 0; i < v.size(); i++)
    {

        v[i] = v[i + 1];
    }
    v[v.size() - 1] = temp;
    for (auto ch : v)
        cout << ch << " ";
}