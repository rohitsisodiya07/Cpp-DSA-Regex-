// 75. Sort Colors

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 0, 2, 1, 1, 0};

    int zero = 0;
    int one = 0;
    int two = 0;
    for (auto ch : v)
    {

        if (ch == 0)
            zero++;
        else if (ch == 1)
            one++;
        else
            two++;
    }
    int i = 0;
    while (zero)
    {

        v[i] = 0;
        zero--;
        i++;
    }
    while (one)
    {

        v[i] = 1;
        one--;
        i++;
    }
    while (two)
    {

        v[i] = 2;
        two--;
        i++;
    }
    for (auto ch : v)
        cout << ch << " ";
}