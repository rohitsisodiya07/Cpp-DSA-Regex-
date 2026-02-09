// Reverse Number Using Recursion.

#include <bits/stdc++.h>
using namespace std;
void print(int &num, int &rev)
{

    if (num == 0)
        return;
    int temp = num % 10;
    rev = rev * 10 + temp;
    num = num / 10;
    print(num, rev);
}

int main()
{

    int num = 123;
    int rev = 0;
    print(num, rev);
    cout << rev;
}
