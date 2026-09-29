// 6 Count how many positive and negative numbers are in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 5, 7, 8, 6};
    int pos = 0;
    int neg = 0;

    for (auto ch : v)
    {
        if (ch % 2 == 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    cout << "Positive Number = " << pos << endl;
    cout << "Negative Number = " << neg;
}