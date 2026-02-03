// 30. Replace all vowels with #.

#include <bits/stdc++.h>
using namespace std;
bool checkVowel(char key, string str)
{

    for (auto ch : str)
    {

        if (ch == key)
            return true;
    }
    return false;
}

int main()
{

    string str = "Rohit Sisodiya";
    string vowels = "aeiouAEIOU";
    string ans = "";
    for (auto ch : str)
    {

        if (checkVowel(ch, vowels))
        {

            ans += "#";
        }
        else
            ans += ch;
    }
    cout << ans;
}