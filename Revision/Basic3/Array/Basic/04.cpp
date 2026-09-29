// 4 Calculate the sum of all elements in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    int totalSum = accumulate(v.begin(), v.end(), 0);
    cout << "Total Sum = " << totalSum << endl;

    int sum = 0;
    for (auto ch : v)
    {
        sum += ch;
    }
    cout << "Sum of Vector = " << sum;
}