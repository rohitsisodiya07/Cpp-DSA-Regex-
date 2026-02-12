// Check if a number is palindrome using recursion.

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

    int num = 1234321;
    int rev = 0;

    revNum(num, rev);
    if (num == rev)
        cout << "Number is Pallindrome";
    else
        cout << "Number is Not Pallindrome";
}