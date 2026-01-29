// Count vowels and consonants.

#include <bits/stdc++.h>
using namespace std;
bool checkCharacter(char key, string str)
{

    for (auto ch : str)
    {
        if (ch == key)
            return true;
    }
    return false;
}
void countVowels(string str)
{

    string vowels = "aeiouAEIOU";
    int vowel = 0;
    int consonant = 0;
    for (auto ch : str)
    {

        if (ch == ' ')
            continue;
        if (checkCharacter(ch, vowels))
            vowel++;
        else
            consonant++;
    }
    cout << "Vowels = " << vowel << endl;
    cout << "Consonant = " << consonant;
}

int main()
{

    string str = "Rohit Sisodiya";
    countVowels(str);
}