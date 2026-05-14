// Write a program to find the intersection of two arrays.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {3, 4, 5, 6, 7};

    unordered_set<int> s(v1.begin(), v1.end());

    for (auto ch : v2)
    {

        if (s.count(ch))
        {
            cout << ch << " ";
            s.erase(ch);
        }
    }
}
