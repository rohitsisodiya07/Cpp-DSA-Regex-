// Move all zeros to the end..0..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {0, 1, 0, 3, 12};

    int j = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            swap(v[i], v[j]);
            j++;
        }
    }
    for (auto ch : v)
    {
        cout << ch << " ";
    }
}