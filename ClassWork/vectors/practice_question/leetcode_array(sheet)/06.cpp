// [1470] Shuffle the Array

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 5, 1, 3, 4, 7};
    vector<int> ans(v.size());

    int n = 3; // Index Number of second array start.
    int i = 0;
    int j = n;
    int k = 0;
    while (j < v.size())
    {

        ans[k] = v[i];
        k++;
        i++;
        ans[k] = v[j];
        k++;
        j++;
    }
    for( auto ch : ans) cout << ch << " " ;
}