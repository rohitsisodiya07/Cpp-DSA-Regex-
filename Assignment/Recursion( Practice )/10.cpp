// Find nth Fibonacci number using recursion.

#include <bits/stdc++.h>
using namespace std;
void getFibonacci(int a, int b, int &c, int i, int n)
{

    if (i >= n)
        return;
    c = a + b;
    a = b;
    b = c;

    getFibonacci(a, b, c, i + 1, n);
}

int main()
{

    int a = 0;
    int b = 1;
    int c;
    int i = 2;
    int n = 5;

    getFibonacci(a, b, c, i, n);
    cout << c;
}
