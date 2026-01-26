// Search Element in a Matrix/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if( v[i][j] == target){
                cout << "Element Present" ;
                return 0 ;
            }
        }
    }
    cout << "Element Not Present" ;
}