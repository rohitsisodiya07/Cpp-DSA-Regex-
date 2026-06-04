// Find whether a pair exists whose sum = target..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 6};
    int target = 6;
    int left = 0;
    int right = v.size() - 1;
    while (left < right)
    {

        int sum = v[left] + v[right];

        if (sum == target)
        {
            cout << "true";
            return 0;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "false";
}