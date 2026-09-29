// 3 Find the smallest element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 5, 6, 7, 0, 8, 9};
    if (v.empty())
    {
        cout << "Vector is Empty";
        return 0;
    }

    int small = *min_element(v.begin(), v.end());
    cout << "Smallest Number = " << small;
}