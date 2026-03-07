#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {10, 20, 35, 15, 55};
    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] > v[i + 1])
        {
            cout << "Array is Not Sorted";
            return 0;
        }
    }
    cout << "Array is Sorted";
}