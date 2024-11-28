// sort a stack

#include <iostream>
#include <stack>
using namespace std;

void insertSort(stack<int> &s, int &insert)
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
        int topElement = s.top();
        s.pop();
        insertSort(s, insert);
        s.push(topElement);
}

void sort(stack<int> &s)
{
        // base case
        if (s.empty())
        {
                return;
        }

        int topElement = s.top();
        s.pop();
        sort(s);
        insertSort(s, topElement);
}
int main()
{
        stack<int> st;
        st.push(7);
        st.push(11);
        st.push(3);
        st.push(5);
        st.push(9);
        sort(st);
        while (!st.empty())
        {
                cout << st.top() << endl;
                st.pop();
        }
        cout << endl;
        return 0;
}