// Check Target Present or Not. [Column]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<char>> v = { {'c', 'a', 'h', 'm'}, {'o', 'e', 'j', 'o'}, {'d', 'o', 'd', 'd'}, {'i', 'o', 'n', 'i'} };
    int row = v[0].size();
    int col = v.size();
    string target = "modi";
    
    for (int i = 0; i < row; i++)
    {
        
        string str = "";
        for (int j = 0; j < col; j++)
        {

            str += v[j][i];
        }
        if (str == target)
        {
            cout << "true";
            return 0;
        }
    }
    cout << "false";
}