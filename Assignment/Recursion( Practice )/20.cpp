// Count number of zeros in a number using recursion.

#include <bits/stdc++.h>
using namespace std;

void countZeroes(int num, int &count)
{

    if (num == 0)
        return;

    if (num % 10 == 0)
        count++;

    num /= 10;

    countZeroes(num, count);
}

int main()
{

    int n = 1452010120;
    int count = 0;

    countZeroes(n, count);
    cout << "Count of Zeroes = " << count;
}
