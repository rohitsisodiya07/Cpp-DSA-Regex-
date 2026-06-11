// Reverse the words in a string.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "I love MERN";

    stack<string> st;
    string word = "";

    for (char ch : str)
    {
        if (ch == ' ')
        {
            st.push(word);
            word = "";
        }
        else
        {
            word += ch;
        }
    }

    st.push(word);

    while (!st.empty())
    {
        cout << st.top();
        st.pop();

        if (!st.empty())
            cout << " ";
    }
    
}