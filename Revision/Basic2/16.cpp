// Find Intersection of Two Arrays.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 4, 6};

    vector<int> ans;

    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size())
    {

        if (a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (auto ch : ans)
    {
        cout << ch << " ";
    }
}
