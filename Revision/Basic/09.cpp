// Write a program to find the union of two arrays..

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using Set
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {3, 4, 5, 6};

    unordered_set<int> s;
    for (auto ch : v1)
    {
        s.insert(ch);
    }
    for (auto ch : v2)
    {
        s.insert(ch);
    }
    for (auto ch : s)
    {
        cout << ch << " ";
    }

    // Using Map
    //  vector<int> v1 = {1, 2, 3, 4};
    //  vector<int> v2 = {3, 4, 5, 6};

    // unordered_map<int, int> m;

    // for (auto ch : v1)
    // {
    //     m[ch]++;
    // }
    // for (auto ch : v2)
    // {
    //     m[ch]++;
    // }
    // for (auto ch : m)
    // {
    //     cout << ch.first << " ";
    // }
}
