// find is kth smallest number in heap
#include <iostream>
#include <queue>
using namespace std;
int kthSmallest(int arr[], int &n, int &k)
{
    // I want to create max-heap
    priority_queue<int> pq;
    // insert of k size of element in heap
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // processing the remaining element in arr
    for (int i = k; i < n; i++)
    {
        // if check top element in heap greater then next element of array
        // then top element are remove and element are insert in heap
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}
int main()
{
    int arr[] = {3, 11, 6, 9, 4, 12, 2, 8};
    int n = 8;
    int k = 4;
    int ans = kthSmallest(arr, n, k);
    cout << "Ans is : " << ans << endl;

    return 0;
}