// First Non-Repeating Character Using Queue

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "aabcbd";
    queue<char> q;
    unordered_map<char, int> m;

    for (auto ch : str)
    {

        m[ch]++;
        q.push(ch);
    }
    while (!q.empty())
    {

        if (m[q.front()] == 1)
        {

            cout << "First Not Repeating Charcter = " << q.front();
            return 0;
        }
        q.pop();
    }
    return 0;
}
