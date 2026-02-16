#include <bits/stdc++.h>
using namespace std;

int main()
{

        // Traverse in Stack
        // vector<int> v = {10, 20, 30, 40};
        // stack<int> st;
        // for (auto ch : v)
        //         st.push(ch);

        // while (!st.empty())
        // {

        //         cout << st.top() << " ";
        //         st.pop();
        // }

        // Reverse a String using stack.
        // string str = "rohit";
        // stack<char> st;
        // for (auto ch : str)
        //         st.push(ch);
        // while (!st.empty())
        // {

        //         cout << st.top() << " ";
        //         st.pop();
        // }

        // Valid Paranthesis.

        string str = "()[]{}";
        stack<char> st;
        for (auto ch : str)
        {
                if (ch == '[' || ch == '(' || ch == '{')
                {
                        st.push(ch);
                }
                else
                {
                        if (st.empty())
                        {
                                cout << "false";
                                return 0;
                        }
                        if ((ch == ')' && st.top() == '(') ||
                            (ch == ']' && st.top() == '[') ||
                            (ch == '}' && st.top() == '{'))
                        {
                                st.pop();
                        }
                        else
                        {
                                cout << "false";
                                return 0;
                        }
                }
        }
        if (st.size() == 0)
        {
                cout << "true";
                return 0;
        }
        else
                cout << "false";
}