#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // min-heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(80);
    pq.push(50);
    pq.push(70);
    pq.push(45);
    cout << "top element is : " << pq.top() << endl;
    pq.pop();
    cout << "top element is : " << pq.top() << endl;
    pq.pop();
    cout << "top element is : " << pq.top() << endl;
    pq.pop();
    cout << "top element is : " << pq.top() << endl;
    pq.pop();
    cout << "size is : " << pq.size() << endl;
    if (pq.empty())
    {
        cout << "priority queue is empty" << endl;
    }
    else
    {
        cout << "priority queue is not empty" << endl;
    }
    return 0;
}