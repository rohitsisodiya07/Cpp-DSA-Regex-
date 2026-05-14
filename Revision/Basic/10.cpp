// Write a program to find the element that appears only once in an array..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Using XOR
    vector<int> v = {1, 2, 3, 2, 1};

    int ans = 0;

    for (auto ch : v)
    {
        ans ^= ch;
    }

    cout << ans;

    // Using Map

    // vector<int> v = {1, 2, 3, 2, 1};
    // unordered_map<int, int> m;

    // for (auto ch : v)
    // {
    //     m[ch]++;
    // }
    // for (auto ch : m)
    // {

    //     if (ch.second == 1)
    //         cout << ch.first << "  ";
    // }
}
