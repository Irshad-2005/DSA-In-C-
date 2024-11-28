// insert at bottom in stack

#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &s, int &target)
{
        // base case
        if (s.empty())
        {
                s.push(target);
                return;
        }

        // 1 case solve
        int topElement = s.top();
        s.pop();
        // rc
        solve(s, target);
        // bt
        s.push(topElement);
}
void insertAtBottom(stack<int> &s)
{
        if (s.empty())
        {
                // stack are empty
                cout << "Stack is empty can not insert at bottom" << endl;
        }
        int target = s.top();
        s.pop();
        solve(s, target);
}
int main()
{
        stack<int> st;
        st.push(1000);
        st.push(1050);
        st.push(999);
        st.push(888);
        st.push(555);

        insertAtBottom(st);

        while (!st.empty())
        {
                cout << st.top() << endl;
                st.pop();
        }
        cout << endl;

        return 0;
}
