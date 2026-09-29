// 8 Search for an element in an array (linear search).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 5, 8, 9, 7, 6};
    int find;
    cout << "Element Find in Array = ";
    cin >> find;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == find)
        {
            cout << "Element Present at Position = " << i;
            return 0;
        }
    }
    cout << "Element Not Present in Array";
}