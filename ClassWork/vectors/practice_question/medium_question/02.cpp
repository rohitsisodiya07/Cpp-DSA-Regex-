// 2 Find the second smallest element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {-10,-20,1,2,5,10};
    int min = INT_MAX;
    int second = INT_MAX;
    for (auto ch : v)
    {
        if (ch < min)
        {
            second = min;
            min = ch;
        }
        else if (ch > min && ch < second)
            second = ch;
    }
    if (second == INT_MAX)
        cout << "-1";
    else
    {
        cout << "Minimum = " << min << endl;
        cout << "Second Minimum = " << second;
    }
}