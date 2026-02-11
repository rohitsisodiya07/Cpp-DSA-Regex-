// Count Even Values of Given Number.

#include <bits/stdc++.h>
using namespace std;
void countEven(int num, int &even)
{

    if (num == 0)
        return;
    int temp = num % 10;
    if (temp % 2 == 0)
        even++;
    num /= 10;
    countEven(num, even);
}

int main()
{

    int num = 84754548;
    int even = 0;
    countEven(num, even);
    cout << "Even = " << even ;
}