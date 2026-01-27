// Print 2D Vector.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = v[0].size();
    // int col = v.size();
    // for (int i = 0; i < row; i++)
    // {

    //     for (int j = 0; j < col; j++)
    //     {

    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //************************************************************ */

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for( auto x : v){

        for( auto y : x){

            cout << y << " ";
        }
        cout << endl ;
    }
}