#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverseQueue(queue<int> &q)
{
    stack<int> s;

    if (q.empty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    //! Step : A
    while (!q.empty())
    {
        // queue front to store in temp
        // pop are in queue
        // push in stack
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

    //! step : B
    while (!s.empty())
    {
        // stack top are store temp
        // pop are in stack
        // push are queue
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
}
int main()
{
    queue<int> q;
    q.push(-5);
    q.push(-20);
    q.push(-7);
    q.push(-18);
    q.push(1);

    reverseQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
