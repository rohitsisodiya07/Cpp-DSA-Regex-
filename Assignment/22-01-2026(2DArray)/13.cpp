// Count +ve and -ve Values in 2D Array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, -2, -3}, {-4, -5, 6}, {7, -8, 9}};
    int row = v.size();
    int col = v[0].size();
    int pos = 0, neg = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (v[i][j] >= 0)
                pos++;
            else
                neg++;
        }
    }
    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
}
