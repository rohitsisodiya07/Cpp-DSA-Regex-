// Indexs of Last Occurence of Element.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{6, 1, 2}, {3, 6, 4}, {9, 6, 3}};
    int row = v[0].size();
    int col = v.size();
    int target = 6;
    int ii = -1;
    int jj = -1;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (v[i][j] == target)
            {

                ii = i;
                jj = j;
            }
        }
    }
    cout << ii << " " << jj;
}