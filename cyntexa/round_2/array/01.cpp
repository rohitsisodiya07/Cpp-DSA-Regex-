// Maximum Subarray Sum (Kadane’s Algorithm)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = 0;
    int ans = INT_MIN;
    for (auto ch : v)
    {

        sum += ch;
        ans = max(ans, sum);
        if (sum < 0)
            sum = 0;
    }
    cout << "Maximum SubArray = " << ans;
}