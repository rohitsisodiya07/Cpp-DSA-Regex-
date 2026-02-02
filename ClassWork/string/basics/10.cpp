// Remove Space and add @.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "My Name is Rohit";
    string word = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == ' ')
        {
            count++;
            word = "";
        }
        else
            word += str[i];
    }
    count++;
    cout << "Total Word = " << count << endl;
    cout << "Last Word = " << word;
}