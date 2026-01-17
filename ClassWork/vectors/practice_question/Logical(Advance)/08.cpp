// 8 Count the number of pairs with a given sum.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 6, 9, 5, 3};
    sort(v.begin(), v.end());
    int target = 11;
    int i = 0;
    int j = v.size() - 1;
    int count = 0;
    while (i < j)
    {

        int sum = v[i] + v[j];
        if (sum == target)
        {
            count++;
            i++;
            j--;
        }
        else if (sum > target)
            j--;
        else
            i++;
    }
    cout << "Pairs = " << count;

    //******************************************* */
    // Time Complexity[O(n2)] - Not Optimal Solution
    //  vector<int> v = {2, 4, 6, 9, 5, 3};
    //  int count = 0;
    //  int target = 11;
    //  for (int i = 0; i < v.size(); i++)
    //  {

    //     for (int j = i + 1; j < v.size(); j++)
    //     {

    //         if (v[i] + v[j] == target)
    //             count++;
    //     }
    // }
    // cout << "Pairs = " << count;
}