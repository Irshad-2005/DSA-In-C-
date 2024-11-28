#include <iostream>
using namespace std;
void reversePrintArray(int arr[], int i, int n)
{
    // base case
    if (i >= n)
    {
        return;
    }
    // recursion calls
    reversePrintArray(arr, i + 1, n);
    // print current element
    cout << arr[i] << " ";
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    reversePrintArray(arr, i, n);
    return 0;
}