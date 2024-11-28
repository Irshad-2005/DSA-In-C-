#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // right search
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // left search
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        // mid updateb
        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 40;
    int n = 5;
    int start = 0;
    int end = n - 1;
    int ans = binarySearch(arr, start, end, key);
    cout << "is find key :" << ans << endl;
    return 0;
}