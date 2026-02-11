// Count Consonant of Given String.

#include <bits/stdc++.h>
using namespace std;
void countConsonant(string str, int &consonant, int i)
{

    if (i == str.size())
        return;

    if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
          str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        consonant++;

    countConsonant(str, consonant, i + 1);
}

int main()
{

    string str = "Rohitma";
    int consonant = 0;
    countConsonant(str, consonant, 0);
    cout << "Consonant = " << consonant;
}