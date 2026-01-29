// Reverse an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 25, 32, 10, 21, 30};
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {

        swap(v[i], v[j]);
        i++;
        j--;
    }
    for (auto ch : v)
        cout << ch << " ";
}