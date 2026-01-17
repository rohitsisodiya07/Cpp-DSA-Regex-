// 5 Move all zeros to the end while maintaining order.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 0, 2, 3, 0, 2, 0, 5, 0};
    vector<int> store;
    for (auto ch : v)
    {
        if (ch != 0)
            store.push_back(ch);
    }
    int i = 0;
    for (auto ch : store)
    {
        v[i] = ch;
        i++;
    }
    while (i < v.size())
    {

        v[i] = 0;
        i++;
    }
    for( auto ch : v) cout << ch << "  " ;
}