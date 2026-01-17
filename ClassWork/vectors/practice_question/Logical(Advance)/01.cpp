// 1 Find the missing number in an array of 1 to n.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v = {0, 1, 3, 4, 5, 6, 7};
    // int n = v.size();
    // int sum = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    // int sum1 = 0;
    // for (auto ch : v)
    //     sum1 += ch;
    // int ans = sum - sum1;
    // cout << "Missing Number is = " << ans;

    //************************************************ */
    vector<int> v = {0, 1, 3, 4, 5, 6, 7};
    int n = v.size();
    int sum = n * (n + 1) / 2;
    int sum1 = 0;
    for (auto ch : v)
        sum1 += ch;
    int ans = sum - sum1;
    cout << "Missing Number is = " << ans;
}