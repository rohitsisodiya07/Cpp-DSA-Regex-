// 1 Find the second largest element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 5, 8, 15, 55, 66, -2 - 7 - 5, 10};
    int max = INT_MIN;
    int second = INT_MIN;
    for (auto ch : v)
    {
        if (ch > max)
        {
            second = max;
            max = ch;
        }
        else if (ch < max && ch > second)
            second = ch;
    }
    if (second == INT_MIN)
        cout << "-1";
    else
    {
        cout << "Maximum = " << max << endl;
        cout << "Second Maximum = " << second;
    }
}