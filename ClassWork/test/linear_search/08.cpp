// Replace All Vowels With #.

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
void replacevowels(string str)
{

    string vowels = "aeiouAEIOU";
    string replace = "";
    for (auto ch : str)
    {

        if (linearsearch(ch, vowels))
            replace += "#";
        else
            replace += ch;
    }
    cout << replace;
}

int main()
{
    string str = "Rohit Sisodiya";
    replacevowels(str);
}