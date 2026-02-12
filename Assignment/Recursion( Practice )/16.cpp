// Reverse a string using recursion.

#include <bits/stdc++.h>
using namespace std;

void revStr(string &str, int i, int j)
{
    if (i > j)
        return;
    swap(str[i], str[j]);

    revStr(str, i + 1, j - 1);
}
int main()
{

    string str = "Rohit Sisodiya";
    int i = 0;
    int j = str.size() - 1;

    revStr(str, i, j);
    cout << str;
}
