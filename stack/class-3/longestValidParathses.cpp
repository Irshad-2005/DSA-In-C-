#include <iostream>
#include <stack>
#include <string>
using namespace std;
int findLongestValidLength(string &s)
{
    stack<int> st;
    st.push(-1);
    int maxLen = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(')
        {
            st.push(i);
        }
        else
        {
            st.pop();

            if (st.empty())
            {
                st.push(i);
            }
            else
            {

                int length = i - st.top();
                maxLen = max(length, maxLen);
            }
        }
    }
    return maxLen;
}
int main()
{
    string s = ")()()()";

    int length = findLongestValidLength(s);
    cout << "Length is : " << length << endl;

    return 0;
}