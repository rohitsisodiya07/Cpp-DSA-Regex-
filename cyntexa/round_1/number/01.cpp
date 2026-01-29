// Check palindrome number

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 123421;
    int temp = num;
    int rev = 0;
    while (num)
    {

        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (temp == rev)
        cout << "Pallindrome";
    else
        cout << "Not Pallindrome";
}