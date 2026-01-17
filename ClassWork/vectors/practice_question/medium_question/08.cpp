// Rotate array elements by 1 position to the left.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {4, 9, 11, 10, 6};
    int temp = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--)
    {

        v[i + 1] = v[i];
    }
    v[0] = temp;
    for (auto ch : v)
        cout << ch << " ";
}