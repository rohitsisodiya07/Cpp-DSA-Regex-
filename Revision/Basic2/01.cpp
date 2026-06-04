// Find the indices of two numbers whose sum is equal to the target.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {

        int res = target - v[i];
        if (m.find(res) != m.end())
        {
            cout << m[res] << " " << i;
            return 0 ;
        }
        else
        {
            m[v[i]] = i;
        }
    }

    // Brute Force Approach
    //  for (int i = 0; i < v.size(); i++)
    //  {

    //     for (int j = 0; j < v.size(); j++)
    //     {

    //         if (v[i] + v[j] == target)
    //         {
    //             cout << i << " " << j;
    //             return 0;
    //         }
    //     }
    // }
}