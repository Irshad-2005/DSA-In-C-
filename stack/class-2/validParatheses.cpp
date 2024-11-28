#include <iostream>
#include <stack>
using namespace std;
bool validParatheses(string &str)
{
        stack<char> st;

        for (int i = 0; i < str.size(); i++)

        {
                char ch = str[i];
                if (ch == '[' || ch == '{' || ch == '(') // open brackets
                {
                        st.push(ch);
                }
                else
                {
                        if (!st.empty())
                        {
                                char topElement = st.top();
                                if (ch == ']' && topElement == '[') // open brackets are available
                                {
                                        st.pop();
                                }
                                else if (ch == '}' && topElement == '{') // open brackets are available
                                {
                                        st.pop();
                                }
                                else if (ch == ')' && topElement == '(') // open brackets are available
                                {
                                        st.pop();
                                }
                                else
                                {
                                        return false;
                                }
                        }
                        else
                        {
                                false;
                        }
                }
        }
        cout << st.empty() << endl;
        if (st.empty())
        {
                return true;
        }
        else
        {
                return false;
        }
}
int main()
{
        stack<int> s;
        string str = "{[[()]}";
        // cout << s.empty() << endl;
        // if (!s.empty())
        // {
        //         cout << "true khali ba" << endl;
        // }
        // else
        // {
        //         cout << "false khali ba" << endl;
        // }
        bool ans = validParatheses(str);
        if (ans)
        {
                cout << "Valid paratheses" << endl;
        }
        else
        {
                cout << "Invalid paratheses" << endl;
        }
        return 0;
}