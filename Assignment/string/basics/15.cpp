// Find First Character of String.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "   Rohit";
    for (auto ch : str)
    {
        if (ch != ' ')
        {
            cout << "First Character = " << ch;
            return 0;
        }
    }
}