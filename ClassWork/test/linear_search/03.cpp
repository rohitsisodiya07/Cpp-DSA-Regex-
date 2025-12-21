// Remove Spaces From String.

#include <bits/stdc++.h>
using namespace std;
bool linearsearch(char key, string str)
{

    for (auto ch : str)
    {

        if (key == ch)
            return true;
    }
    return false;
}
void removespace(string str)
{

    string space = " ";
    string res = "";
    for (auto ch : str)
    {
        if (!linearsearch(ch, space))
            res += ch;
    }
    cout << res;
}

int main()
{
    string str = "My Name is Rohit Sisodiya";
    removespace(str);
}