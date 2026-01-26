// Find Maximum in Each Row.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans;
    int row = v.size();
    int col = v[0].size();
    int largest;

    for (int i = 0; i < row; i++)
    {

        largest = -1;
        for (int j = 0; j < col; j++)
        {

            largest = max(largest, v[i][j]);
        }
        ans.push_back(largest);
    }
    for (auto ch : ans)
        cout << ch << " ";
}