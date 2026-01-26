// Count Even and Odd in Matrix.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v = {{5, 2, 2}, {2, 9, 6}, {7, 2, 2}};
    int row = v.size();
    int col = v[0].size();
    int even = 0, odd = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (v[j][i] % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;
}