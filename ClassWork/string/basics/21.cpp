// 21. Count number of lowercase letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Rohit Sisodiya";
    int upper = 0;
    for (auto ch : str)
    {

        if (ch >= 'a' && ch <= 'z')
            upper++;
    }
    cout << "Count = " << upper;
}