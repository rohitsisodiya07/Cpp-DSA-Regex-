// 4. Write a function to check whether a number is even or odd.

#include <bits/stdc++.h>
using namespace std;

int checkNumber(int num)
{
    if (num % 2 == 0)
        return 1;
    return 0;
}

int main()
{

    int num;
    cout << "Enter Number = ";
    cin >> num;

    if (checkNumber(num))
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}