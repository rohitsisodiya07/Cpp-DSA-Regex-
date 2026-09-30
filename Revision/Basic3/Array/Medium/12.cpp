// 12 Count even and odd numbers in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 9};
    int even = 0, odd = 0;

    for (auto ch : v)
    {
        if (ch % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even = " << even;
    cout << "Odd = " << odd;
}