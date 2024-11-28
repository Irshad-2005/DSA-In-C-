//! Reverse Queue using Recursion
#include <iostream>
#include <queue>
using namespace std;
void reverseQueueRecursion(queue<int> &q)
{
    // base case
    if (q.empty())
    {
        return;
    }
    // queue ka front store kro temp me
    // queue ko pop kro
    // recursion call
    // queue me push kro temp

    int temp = q.front();
    q.pop();
    reverseQueueRecursion(q);
    q.push(temp);
}
int main()
{
    queue<int> q;
    q.push(8);
    q.push(5);
    q.push(3);
    q.push(9);
    q.push(2);

    reverseQueueRecursion(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
