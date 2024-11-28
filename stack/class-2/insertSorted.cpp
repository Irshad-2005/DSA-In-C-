// insert are element as sorted stack
#include <iostream>
#include <stack>
using namespace std;
void insertAtSorted(stack<int> &s, int &insert)
{
        // base case
        if (s.empty())
        {
                s.push(insert);
                return;
        }
        if (insert <= s.top())
        {
                s.push(insert);
                return;
        }

        // topelement store
        int topElement = s.top();

        // pop
        s.pop();

        // recursion calls
        insertAtSorted(s, insert);

        // backtracking
        s.push(topElement);
}
int main()
{
        stack<int> st;
        st.push(7);
        st.push(6);
        st.push(4);
        st.push(3);
        int insert = 101;
        insertAtSorted(st, insert);
        while (!st.empty())
        {
                cout << st.top() << endl;
                st.pop();
        }
        cout << endl;

        return 0;
}