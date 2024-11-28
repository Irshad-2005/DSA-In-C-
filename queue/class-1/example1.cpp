#include <iostream>
using namespace std;
#include <queue>
int main()
{
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(11);

    cout << "size : " << q.size() << endl;

    q.pop();

    cout << "size : " << q.size() << endl;

    cout << "Front : " << q.front() << endl;

    if (q.empty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is not empty" << endl;
    }

    return 0;
}