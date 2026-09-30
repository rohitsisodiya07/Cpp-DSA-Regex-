// 5 Copy all elements of one array into another.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 7, 8, 6};
    vector<int> newVector = v;
    // for (auto ch : v)
    // {
    //     newVector.push_back(ch);
    // }
    for (auto ch : newVector)
    {
        cout << ch << ' ';
    }
    return 0 ;
}