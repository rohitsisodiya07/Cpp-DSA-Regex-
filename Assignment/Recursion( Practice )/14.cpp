// Find maximum element in an array using recursion.

#include <bits/stdc++.h>
using namespace std;

void getMaximum(int i, vector<int> v, int &maxii)
{

    if (i == v.size())
        return;
    maxii = max(maxii, v[i]);
    getMaximum(i + 1, v, maxii);
}
int main()
{

    vector<int> v = {2, 6, 9, 12, 2, 25, 32, 400, 50, 10, 20};
    int i = 0;
    int maxii = INT_MIN;

    getMaximum(i, v, maxii);
    cout << "Maximum = " << maxii;
}
