// Count Number of UpperCase.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Rohit!@#$%^&*()Sisodiya";
    int upper = 0;
    for (auto ch : str)
    {

        if (ch >= 'A' && ch <= 'Z')
            upper++;
    }
    cout << "Count = " << upper;
}