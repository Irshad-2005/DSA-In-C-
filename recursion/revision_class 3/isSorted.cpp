#include <iostream>
using namespace std;
bool isSort(int arr[], int i, int n)
{
    // base case
    if (i >= n - 1)
    {
        return true;
    }

    // 1 case solve kar do
    if (arr[i] <= arr[i + 1])
    {
        i++;
    }
    else
    {
        return false;
    }
    // baki sab recursion sambhal lega
    return isSort(arr, i, n);
}
int main()
{
    int arr[6] = {10, 10, 10};
    int n = 3;
    int i = 0;
    bool ans = isSort(arr, i, n);

    if (ans)
    {
        cout << "Array are Sorted"
             << " ";
    }
    else
    {
        cout << "Array are not Sorted"
             << " ";
    }

    return 0;
}