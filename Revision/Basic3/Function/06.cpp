// 6. Write a function to swap two numbers using call by value.

#include <bits/stdc++.h>
using namespace std;

void numSwap(int num1, int num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "Number 1 =" << num1 << endl;
    cout << "Number 2 =" << num2;
}

int main()
{

    int num1, num2;
    cout << "Enter Number1 = ";
    cin >> num1;
    cout << "Enter Number2 = ";
    cin >> num2;

    numSwap(num1, num2);
}