// 1 Find the second largest element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 5, 7, 8, 9, 15};
    int large = INT_MIN;
    int second = INT_MIN;
    for (auto ch : v)
    {
        if (ch > large)
        {
            second = large;
            large = ch;
        }
        else if (ch < large && ch > second)
        {
            second = ch;
        }
    }
    cout << "Second Largest Element = " << second;
}