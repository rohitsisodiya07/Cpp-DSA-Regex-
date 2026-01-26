// Count the number of Prime Numbers.

#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n)
{

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = v.size();
    int col = v[0].size();
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (v[i][j] == 1)
                count++;
            else if (checkPrime(v[i][j]))
                count++;
        }
    }
    cout << "Total Prime Numbers in Matrix = " << count;
}