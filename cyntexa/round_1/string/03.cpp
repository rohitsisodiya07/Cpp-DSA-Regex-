// Count frequency of characters.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Rohit Sisodiya";
    map<char, int> m;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] != ' ')
            m[str[i]]++;
    }
    for (auto ch : m)
        cout << ch.first << " => " << ch.second << endl;
}