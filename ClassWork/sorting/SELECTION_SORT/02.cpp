#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {9, 1, 6, 4, 2};
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {

            if (v[j] < v[minIndex])
            {

                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }
    for (auto ch : v)
        cout << ch << " ";
}