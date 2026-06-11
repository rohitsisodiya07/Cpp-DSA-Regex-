// Find the maximum consecutive 1's.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 1, 0, 1, 1, 1};
    int one = 0;
    int result = 0;
    for (auto ch : v)
    {

        if (ch == 1)
        {
            one++;
        }
        else
        {
            result = max(result, one);
            one = 0;
        }
    }
    result = max(result, one);
    cout << "Maximum Ones = " << result;
}