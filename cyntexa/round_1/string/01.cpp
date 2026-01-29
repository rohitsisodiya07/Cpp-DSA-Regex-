// Reverse a string

#include <bits/stdc++.h>
using namespace std;
void reverseString(string str)
{

    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {

        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout << str;
}

int main()
{

    string str = "Rohit Sisodiya";
    reverseString(str);
}