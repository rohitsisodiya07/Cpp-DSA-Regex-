// 3 Count frequency of each element in an array.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 6, 8, 10, 4, 10, 8, 6, 7, 2};
    map<int, int> m;
    for (auto ch : v)
    {

        m[ch]++;
    }
    for (auto ch : m)
    {

        cout << ch.first << " => " << ch.second << endl;
    }
}