// Check If String Only CDigits.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "123456";
    for (auto ch : str)
    {
        if (!(ch >= '0' && ch <= '9'))
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}