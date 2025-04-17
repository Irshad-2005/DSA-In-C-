// create a heap using priority queue in stl
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max-heap
    priority_queue<int> pq;

    pq.push(50);
    pq.push(70);
    pq.push(90);
    cout << " top element is : " << pq.top() << endl;
    pq.pop();
    cout << " top element is : " << pq.top() << endl;
    pq.pop();
    cout << " top element is : " << pq.top() << endl;
    pq.pop();
    cout << " size of priority queue is  : " << pq.size() << endl;

    if (pq.empty())
    {
        cout << " priority queue is empty " << endl;
    }
    else
    {
        cout << " priority queue is not empty " << endl;
    }
    return 0;
}