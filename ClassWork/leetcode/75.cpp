#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 0, 2, 1, 1, 0, 2, 1, 0, 2};
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
        i++;
        zero--;
    }
    while (one)
    {
        v[i] = 1;
        i++;
        one--;
    }
    while (two)
    {
        v[i] = 2;
        i++;
        two--;
    }
    for (auto ch : v)
        cout << ch << " ";
}