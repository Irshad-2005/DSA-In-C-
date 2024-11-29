//! first negative interger in every window of queue
#include <iostream>
#include <queue>
using namespace std;
void solve(int arr[], int n, int k)
{
    queue<int> q;
    // step : A
    //  first k element are process in window
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    // step : B
    // remainig element process
    for (int i = k; i < n; i++)
    {
        // front element
        if (!q.empty())
        {
            cout << arr[q.front()] << " ";
        }
        else
        {
            cout << 0 << " ";
        }

        // remove element outside in window
        while (!q.empty() && i - q.front() >= k)
        {
            q.pop();
        }

        // insert element in queue

        if (arr[i] < 0)
        {
            q.push(i);
        }
    }

    if (!q.empty())
    {
        cout << arr[q.front()] << " ";
    }
    else
    {
        cout << 0 << " ";
    }
}
int main()
{
    int arr[8] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = 8;
    int k = 3;
    solve(arr, n, k);
    cout << endl;
    return 0;
}