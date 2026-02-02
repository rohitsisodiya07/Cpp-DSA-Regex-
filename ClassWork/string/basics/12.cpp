// Count Only Consonant.

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
    string vowels = "aeiouAeiou";
    int cons = 0;
    for (auto ch : str)
    {

        if (!checkVowel(ch, vowels))
            cons++;
    }
    cout << "Total Consonant = " << cons;
}