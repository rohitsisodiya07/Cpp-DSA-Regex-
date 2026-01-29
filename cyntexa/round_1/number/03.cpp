// Reverse a number.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 12345;
    int rev = 0;
    while (num)
    {

        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    cout << "Reversed = " << rev;
}