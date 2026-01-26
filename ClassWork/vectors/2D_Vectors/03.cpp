//Check Element Present or Not.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = v[0].size();
    int col = v.size();
    int target = 6;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (v[i][j] == target)
            {

                cout << "Present" ;
                return 0;
            }
        }
    }
    cout << "Not PResent";
}