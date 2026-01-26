// Find Index of 2 in each row.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v = {{0, 2, 2}, {2, 9, 6}, {2, 2, 2}};
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (v[i][j] == 2)
            {

                cout << "(" << i << "," << j << ")" << endl;
                break;
            }
        }
    }
}