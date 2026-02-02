//Count Vowels and Consonant.

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(char key, string str)
{
    for (auto ch : str)
    {
        if (key == ch)
            return true;
    }
    return false;
}

void checkVowels(string str)
{

    string vowel = "aeiouAEIOU";
    int vow = 0;
    int cons = 0;
    for (auto ch : str)
    {

        if (linearSearch(ch, vowel))
            vow++;
        else
            cons++;
    }
    cout << "Vowels =  " << vow << endl;
    cout << "Consonant = " << cons;
}

int main()
{

    string str = "Rohit Sisodiya";
    checkVowels(str);
}