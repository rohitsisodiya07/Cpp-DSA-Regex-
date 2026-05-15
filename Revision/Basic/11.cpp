// Write a program to find the leaders in an array.
// A leader is an element that is greater than all elements to its right.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {16, 17, 4, 3, 5, 2};
    int maxi = INT_MIN;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] > maxi)
        {
            cout << v[i] << " ";
            maxi = v[i];
        }
    }
}