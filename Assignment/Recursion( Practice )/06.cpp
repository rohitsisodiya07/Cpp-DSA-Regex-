// Count digits in a number using recursion.

#include <bits/stdc++.h>
using namespace std;
void countDigit(int num, int &count)
{

    if (num == 0)
        return;

    count++;
    num /= 10;
    countDigit(num, count);
}

int main()
{

    int num = 74123985;
    int count = 0;

    countDigit(num, count);
    cout << "Count = " << count;
}