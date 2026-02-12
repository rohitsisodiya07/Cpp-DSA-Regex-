// Find sum of digits of a number using recursion.

#include <bits/stdc++.h>
using namespace std;
void sumDigit(int num, int &sum)
{

    if (num == 0)
        return;

    int digit = num % 10;
    sum += digit;
    num /= 10;
    sumDigit(num, sum);
}

int main()
{

    int num = 532532582;
    int sum = 0;

    sumDigit(num, sum);
    cout << "Sum of Digits = " << sum;
}