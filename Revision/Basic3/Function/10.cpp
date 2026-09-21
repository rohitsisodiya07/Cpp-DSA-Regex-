// 10. Write a function to reverse a given number.

#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num)
{
    int rev = 0;
    while (num)
    {
        int last = num % 10;
        // cout << last;
        rev = rev * 10 + last;
        num = num / 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter Number = ";
    cin >> num;

    cout << reverseNumber(num);
}