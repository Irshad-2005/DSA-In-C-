#include <iostream>
using namespace std;
bool isSorted(int arr[], int i, int n)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }
    // 1 case tum solve kro
    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    // baki sab recursion sabhal lega
    return isSorted(arr, i + 1, n);
}
int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int i = 0;
    bool ans = isSorted(arr, i, n);
    cout << "is Sorted : " << ans << endl;
    return 0;
}