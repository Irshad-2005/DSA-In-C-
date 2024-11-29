//! Interleave first and second half of queue
#include <iostream>
#include <queue>
using namespace std;
void interLeaveQueue(queue<int> &q1)
{
    queue<int> q2;
    int n = q1.size();
    int count = 0;
    // divide two half of queue
    while (!q1.empty())
    {
        int temp = q1.front();
        q1.pop();
        q2.push(temp);
        count++;

        if (count == n / 2)
        {
            break;
        }
    }

    // start interleaving queue
    while (!q2.empty())
    {
        int temp1 = q2.front();
        q2.pop();
        q1.push(temp1);

        int temp2 = q1.front();
        q1.pop();
        q1.push(temp2);
    }
    if (n & 1) // check are queue is odd
    {
        int temp = q1.front();
        q1.pop();
        q1.push(temp);
    }
}
int main()
{
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    interLeaveQueue(q1);

    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    return 0;
}