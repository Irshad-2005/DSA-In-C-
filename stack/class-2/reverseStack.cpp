// Reverse stack

#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &s, int target)
{
        // base case
        if (s.empty())
        {
                s.push(target);
                return;
        }

        // A : top element store kro
        int topElement = s.top();

        // pop kar do
        s.pop();

        // recursion calls

        insertAtBottom(s, target);

        // backtracking

        s.push(topElement);
}
void reverseStack(stack<int> &s)
{
        // base case
        if (s.empty())
        {
                return;
        }

        // A : topElement nikalo or store kro
        int topElement = s.top();
        // top element pop kr do
        s.pop();
        //

        // recursion  calls
        reverseStack(s);

        // insertAtBotton function calls

        insertAtBottom(s, topElement);
}
int main()
{
        stack<int> st;
        st.push(1);
        st.push(3);
        st.push(5);
        st.push(7);
        if (st.empty())
        {
                cout << "Stack are empty ...";
                return 0;
        }
        reverseStack(st);
        while (!st.empty())
        {
                cout << st.top() << endl;
                st.pop();
        }
        cout << endl;
        return 0;
}