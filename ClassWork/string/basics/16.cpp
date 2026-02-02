// Find First Character of String.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "   Rohit   ";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] != ' ')
        {
            cout << "First Character = " << str[i];
            return 0;
        }
    }
}