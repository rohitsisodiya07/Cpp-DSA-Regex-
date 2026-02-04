#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s = "abbaca";
    string ans = "";
    stack<char> st;
    for (auto ch : s)
    {

        if (st.top() == ch && !st.empty())
        {
            st.pop();
        }
        else
            st.push(ch);
    }

    while (!st.empty())
    {

        ans += st.top();
        st.pop();
    }
    cout << ans;
}