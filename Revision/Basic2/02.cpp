// Two pointers use karke palindrome check karo..

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "madam";
    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {

        if (str[i] != str[j])
        {
            cout << "Not Pallindrome";
            return 0;
        }
        i++;
        j--;
    }

    cout << "Pallindrome";
}