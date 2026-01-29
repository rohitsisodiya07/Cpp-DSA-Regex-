// Fibonacci series (using loop).

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 0;
    int b = 1;
    int n = 10;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {

        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}