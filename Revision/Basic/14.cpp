// Write a program to find the majority element in an array.
// A majority element appears more than n/2 times.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 2, 1, 1, 2, 2, 2};

    int candidate = 0;
    int count = 0;

    for (auto ch : v)
    {

        if (count == 0)
        {
            candidate = ch;
        }

        if (ch == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout << candidate;

    // Using Sort
    //  vector<int> v = {2, 2, 1, 1, 2, 2, 2};
    //  sort(v.begin(), v.end());
    //  cout << v[v.size() / 2];
}