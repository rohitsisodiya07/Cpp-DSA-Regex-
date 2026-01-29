// Check prime number.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 4;
    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            cout << "Number is Not Prime";
            return 0;
        }
    }
    cout << "Number is Prime";
}