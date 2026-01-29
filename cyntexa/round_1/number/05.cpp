// Count number of digits.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 441454;
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    cout << "Count = " << count;
}