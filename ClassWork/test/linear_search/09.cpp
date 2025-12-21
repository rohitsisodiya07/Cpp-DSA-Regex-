// Convert upeercase to lowercase and lowercase to uppercase.

#include <bits/stdc++.h>
using namespace std;

void convertalphabet(string str)
{

    string res = "";
    for (auto ch : str)
    {

        if (ch >= 65 && ch <= 90)
            res += ch + 32;
        else
            res += ch - 32;
    }
    cout << "Result String = " << res;
}

int main()
{
    string str = "RohitSisodiya";
    cout << "Given String = " << str << endl;
    convertalphabet(str);
}