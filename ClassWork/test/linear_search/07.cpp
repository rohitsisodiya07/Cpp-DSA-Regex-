// Count Number of Spaces From String.

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
void countspaces(string str)
{

    string space = " ";
    int count = 0;
    for (auto ch : str)
    {
        if (linearsearch(ch, space))
            count++;
    }
    cout << "Count of Spaces = " << count;
}

int main()
{
    string str = "My N a m e is R o h i t Sisodiya";
    countspaces(str);
}