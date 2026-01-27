// Check Integer Value Present or Not.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<float>> v = {{3.4, 9.6, 3.8}, {6.1, 3.2, 3.3}, {6.4, 13.3, 16.4}, {2.1, 2.8, 2.9}, {19.1, 20, 20.1}};
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            int store = v[i][j];
            if (store % 2 == 0)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "not present";
}