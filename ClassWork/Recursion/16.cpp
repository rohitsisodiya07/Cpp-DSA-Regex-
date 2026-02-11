// Count Vowels in a Given Stringr.

#include <bits/stdc++.h>
using namespace std;
void countVowel(string str, int &vowel, int i)
{

    if (i == str.size())
        return;

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        vowel++;

    countVowel(str, vowel, i + 1);
}

int main()
{

    string str = "Rohit";
    int vowel = 0;
    countVowel(str, vowel, 0);
    cout << "Vowels = " << vowel;
}