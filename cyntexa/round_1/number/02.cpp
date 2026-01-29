// Sum of digits.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 123421;
    int sum = 0;
    while (num)
    {

        sum += num % 10;
        num = num / 10;
    }
    cout << "Sum of Digits =" << sum;
}