// Implement binary search using recursion.

#include <bits/stdc++.h>
using namespace std;

bool binaryRecursion(vector<int> v, int left, int right, int target)
{

    int mid = (left + right) / 2;

    if (left > right)
        return false;

    if (v[mid] == target)
        return true;

    if (v[mid] > target)
        right = mid - 1;
    else
        left = mid + 1;

    return binaryRecursion(v, left, right, target);
}
int main()
{

    vector<int> v = {2, 6, 9, 12, 15, 25, 32, 40, 50};
    int target = 15;
    int left = 0;
    int right = v.size() - 1;

    if (binaryRecursion(v, left, right, target))
        cout << "Present";
    else
        cout << "Not Present";
}
