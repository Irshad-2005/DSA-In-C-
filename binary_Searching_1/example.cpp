#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            // right side
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    int arr[] = {1, 2, 4, 5, 8, 11, 13, 17, 19};
    int size = 9;
    int key = 13;
    int ans = binarySearch(arr, size, key);
    cout << "key index is : " << ans << endl;

    return 0;
}
