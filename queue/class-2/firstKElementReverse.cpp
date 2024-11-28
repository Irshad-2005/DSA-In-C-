//! Reverse First K Element of Queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseKElement(queue<int> &q, int k)
{
    stack<int> s;
    int n = q.size();
    if (k <= 0 || k >= n)
    {
        return;
    }
    int count = 0;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if (count == k)
        {
            break;
        }
    }

    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    count = 0;
    while (!q.empty() && n - k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if (count == n - k)
        {
            break;
        }
    }
}
int main()
{
    queue<int> q;
    q.push(7);
    q.push(3);
    q.push(8);
    q.push(5);
    q.push(9);
    q.push(2);
    q.push(11);
    q.push(4);

    reverseKElement(q, 4);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}