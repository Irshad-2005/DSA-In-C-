#include <iostream>
using namespace std;
int findIndex(int arr[], int i, int n, int key)
{
    // base case
    if (i >= 5)
    {
        return -1;
    }

    // 1 case solve kardo
    if (arr[i] == key)

    {
        return i;
    }
    // baki sab recursion sambhal lega
    return findIndex(arr, i + 1, n, key);
}
int main()
{
    int arr[10] = {10, 13, 15, 17, 19, 21, 23, 25, 30, 33};
    int n = 10;
    int i = 0;
    int key = 19;
    int ans = findIndex(arr, i, n, key);
    cout << "Key index is : " << ans << endl;
    return 0;
}
