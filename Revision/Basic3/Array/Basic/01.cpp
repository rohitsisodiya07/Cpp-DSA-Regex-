// 1 Take 5 integers in an array from the user and print them.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Vector Value = ";
        cin >> v[i];
    }
    for (auto ch : v)
    {
        cout << ch << " ";
    }
}