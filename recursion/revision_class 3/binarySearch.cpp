#include <iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key)
{
    // base case
    if (s > e)
    {
        return false;
    }
    // 1 case solve kar do
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    // baki sab recursion sambhal lega
    if (arr[mid] <= key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[5] = {10, 10, 10, 10, 10};
    int n = 5;
    int s = 0;
    int e = n - 1;
    int key = 10;
    bool ans = binarySearch(arr, s, e, key);
    if (ans)
    {
        cout << "Key are present " << endl;
    }
    else
    {
        cout << "key are not present " << endl;
    }
    return 0;
}