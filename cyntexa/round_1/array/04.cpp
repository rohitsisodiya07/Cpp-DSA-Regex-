// Find second largest element.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 25, 32, 10, 21, 30};
    int largest = INT_MIN;
    int second = INT_MIN;
    for (auto ch : v)
    {

        if (ch > largest)
        {
            second = largest;
            largest = ch;
        }
        else if (ch < largest && ch > second)
        {
            second = ch;
        }
    }
    cout << largest << endl;
    cout << second << endl;
}