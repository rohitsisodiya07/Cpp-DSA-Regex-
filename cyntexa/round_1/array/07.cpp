// Count even and odd numbers.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 25, 32, 10, 21, 30};
    int even = 0;
    int odd = 0;
    for (auto ch : v)
    {
        if (ch % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;
}