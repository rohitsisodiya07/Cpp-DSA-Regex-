// Best Time to Buy and Sell Stock

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {7, 1, 5, 3, 6, 4};
    int selling = 0;
    int profit = 0;
    int i = v.size() - 1;
    while (i >= 0)
    {

        if (v[i] > selling)
        {
            selling = v[i];
        }
        else
        {
            profit = max(selling - v[i], profit);
        }
        i--;
    }
    cout << "Profit = " << profit;
}