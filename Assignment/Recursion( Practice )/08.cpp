// Reverse a number using recursion.

#include <bits/stdc++.h>
using namespace std;
void revNum(int num, int &rev)
{

    if (num == 0)
        return;

    int digit = num % 10;
    rev = rev * 10 + digit;
    num /= 10;
    revNum(num, rev);
}

int main()
{

    int num = 532532582;
    int rev = 0;

    revNum(num, rev);
    cout << "Reversed Number= " << rev;
}