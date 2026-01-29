#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 1, 4, 2, 8};
    int n = v.size() - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {

            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    for( auto ch : v) cout << ch << " " ;
}