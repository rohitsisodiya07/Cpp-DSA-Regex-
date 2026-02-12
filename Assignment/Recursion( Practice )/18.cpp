// Remove all occurrences of a character from a string using recursion

#include <bits/stdc++.h>
using namespace std;

void removeChar(string str, int i, char ch, string &ans)
{

    if (i == str.size())
        return;

    if (str[i] != ch)
        ans += str[i];

    removeChar(str, i + 1, ch, ans);
}
int main()
{

    string str = "Rohit Sisodiya";
    int i = 0;
    char ch = 'o';
    string ans = "";

    removeChar(str, i, ch, ans);
    cout << "String After Removed Character = " << ans;
}