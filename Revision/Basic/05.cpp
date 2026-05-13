// Write a program to find the missing number in an array..

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Optimized Approach
    vector<int> v = {1, 2, 3, 4, 6};
    int n = v.size() + 1;
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    for (auto ch : v)
    {
        sum += ch;
    }
    cout << total - sum;

    // Using extra Pointer
    // vector<int> v = {1, 2, 3, 4, 6};

    // int j = 0;

    // for (int i = 1; i <= v.size() + 1; i++)
    // {

    //     if (v[j] != i)
    //     {
    //         cout << i;
    //         return 0;
    //     }

    //     j++;
    // }
}
