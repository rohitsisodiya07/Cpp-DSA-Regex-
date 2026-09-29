#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 10, 15, 20, 30};

    if (v.empty())
    {
        cout << "Vector is Empty";
        return 0;
    }

    int sum = accumulate(v.begin(), v.end(), 0);
    double avg = (double)sum / v.size();

    cout << "Average of Array = " << avg;

    return 0;
}