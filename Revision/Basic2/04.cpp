// Array me duplicates hain ya nahi?.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 2};
    unordered_set<int> s;
    for (auto ch : v)
    {

        if (s.count(ch))
        {
            cout << "Duplicate Present";
            return 0;
        }
        else
        {
            s.insert(ch);
        }
    }
    cout << "Duplicate Not Present" ;
}