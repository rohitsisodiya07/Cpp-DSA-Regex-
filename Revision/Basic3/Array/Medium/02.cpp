// 2 Find the second smallest element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 5, 7, 8, 9, 15};
    int small = INT_MAX;
    int second = INT_MAX;
    for (auto ch : v)
    {
        if (ch < small)
        {
            second = small;
            small = ch;
        }
        else if (ch > small && ch < second)
        {
            second = ch;
        }
    }
    cout << "Second Smallest Element = " << second;
}