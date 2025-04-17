// find the kth greatest number of heap
#include <iostream>
#include <queue>
using namespace std;
int kthGreatestNumber(int arr[], int &n, int &k)
{
    // I want to create a min-heap
    priority_queue<int, vector<int>, greater<int>> pq;

    // insert the k size of element in min-heap
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    // processing the remaining element of array
    for (int i = k; i < n; i++)
    {
        // check to top element are less then next element of array
        // then top element are remove and next element are insert
        if (arr[i] > pq.top())
        {
            // remove top element
            pq.pop();
            // insert the next element in array
            pq.push(arr[i]);
        }
    }

    return pq.top();
}
int main()
{
    int arr[] = {60, 80, 70, 40, 30, 20, 90};
    int n = 7;
    int k = 7;
    int ans = kthGreatestNumber(arr, n, k);

    cout << "Ans is : " << ans << endl;

    return 0;
}