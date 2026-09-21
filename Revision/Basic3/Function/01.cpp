// 1. Write a function to add two numbers and return the sum.

#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{

    int a, b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;

    cout << "Sum of Values = " << sum(a, b);
}