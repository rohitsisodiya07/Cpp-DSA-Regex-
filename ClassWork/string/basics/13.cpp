// Check If String Only Contain Alphabet.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Rohit Sisodiya";
    for (auto ch : str)
    {
        if (!((ch >= 65 && ch <= 90) || (ch >= 90 && ch <= 123)))
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}