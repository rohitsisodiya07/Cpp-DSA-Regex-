// Find the missing number..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 5};
    int n = v.size() + 1;
    int actualSum = (n * (n + 1)) / 2;
    int getSum = 0;
    for (auto ch : v)
    {
        getSum += ch;
    }
    cout << actualSum - getSum;
}