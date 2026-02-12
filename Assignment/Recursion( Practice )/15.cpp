// Implement linear search using recursion.

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> v, int i, int target)
{

    if (i == v.size())
        return false;

    if (v[i] == target)
        return true;

    return linearSearch(v, i + 1, target);
}
int main()
{

    vector<int> v = {20, 40, 30, 22, 50, 40, 66};
    int target = 50;
    int i = 0;

    if (linearSearch(v, i, target))
        cout << "Element Present";
    else
        cout << "Element Not Present";
}
