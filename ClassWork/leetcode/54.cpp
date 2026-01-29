// 73. set Matrix Zeroes.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v = {{1, 2, 3}, {4, 0, 9}, {6, 4, 3}};
    int row = v[0].size();
    int col = v.size();
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (v[i][j] == 0)
            {
                int x = i;
                int y = j;
                x--;
                v[x][j] = -1;
                x += 2;
                v[x][j] = -1;
                y++;
                v[i][y] = -1;
                y -= 2;
                v[i][y] = -1;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (v[i][j] == -1)
                v[i][j] = 0;
        }
    }
    for (auto ch : v)
    {
        for (auto x : ch)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
