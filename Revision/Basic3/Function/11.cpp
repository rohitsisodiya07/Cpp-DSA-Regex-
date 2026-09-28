// Swap Call By Reference

#include <bits/stdc++.h>
using namespace std;

void swapValues(int &a, int &b)
{
    swap(a, b);
}

int main()
{

    int a = 10, b = 20;

    swapValues(a, b);

    cout << a << endl;
    cout << b;
}