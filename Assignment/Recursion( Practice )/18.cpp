// Find minimum element in an array using recursion

#include <bits/stdc++.h>
using namespace std;

void getMinimum(int i, vector<int> v, int &mini)
{

    if (i == v.size())
        return;
    mini = min(mini, v[i]);
    getMinimum(i + 1, v, mini);
}
int main()
{

    vector<int> v = {20, 60, 9, 12, 200, 25, 32, 400, 50, 10, 20};
    int i = 0;
    int mini = INT_MAX;

    getMinimum(i, v, mini);
    cout << "Minimum = " << mini;
}