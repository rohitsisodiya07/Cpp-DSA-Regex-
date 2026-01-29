// Sum of all elements.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 25, 32, 10, 21, 30};
    int sum = 0 ;
    for (auto ch : v)
    {
        sum+= ch ;
    }
    cout << "Sum = " << sum ;
}