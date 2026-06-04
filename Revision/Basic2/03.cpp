// Find the largest element in an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 2, 9, 1, 7};
    int largest = INT_MIN;
    int second = INT_MIN;
    for (auto ch : v)
    {

        if (ch > largest)
        {
            second = largest;
            largest = ch;
        }
        else if (largest > ch && ch > second)
        {
            second = ch;
        }
    }
    cout << second;
}