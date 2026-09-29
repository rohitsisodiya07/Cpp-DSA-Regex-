// 2 Find the largest element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 50, 40, 60, 70, 20, 2};
    if (v.empty())
    {
        cout << "Vector is Empty";
        return 0;
    }

    int largest = *max_element(v.begin(), v.end());
    cout << "Largest = " << largest << endl;

    int large = INT_MIN;
    for (auto ch : v)
    {
        if (large < ch)
        {
            large = ch;
        }
    }
    cout << "Largest Number = " << large;
}