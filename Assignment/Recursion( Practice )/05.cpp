// Find power of a number (a^b) using recursion.

#include <bits/stdc++.h>
using namespace std;
void getPower(int num, int power, int &ans)
{

    if (power < 1)
        return;

    ans = ans * num;
    getPower(num, power - 1, ans);
}

int main()
{

    int num = 5;
    int power = 3;

    int ans = 1;

    getPower(num, power, ans);
    cout << "Power = " << ans;
}