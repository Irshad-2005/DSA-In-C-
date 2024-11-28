#include <iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    // base case
    if (start > end)
    {
        return false;
    }
    // 1 case tum solve kro
    if (key == arr[mid])
    {
        return true;
    }
    // baki sab recursion sabhal lega
    if (key > arr[mid])
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 40;
    int n = 5;
    int start = 0;
    int end = n - 1;
    bool ans = binarySearch(arr, start, end, key);
    cout << "is Find : " << ans << endl;
    return 0;
}