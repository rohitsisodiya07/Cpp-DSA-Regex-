// Count Vowels and Consonant in String.

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
void countaplha(string str)
{

    string vowels = "aeiouAEIOU";
    int vow = 0, cons = 0;
    for (auto ch : str)
    {

        if (linearsearch(ch, vowels))
            vow++;
        else
            cons++;
    }
    cout << "Vowels = " << vow << endl;
    cout << "Consonant = " << cons << endl;
}

int main()
{
    string str = "rohitsisodiya";
    countaplha(str);
}