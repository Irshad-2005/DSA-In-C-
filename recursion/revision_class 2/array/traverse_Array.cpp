#include <iostream>
using namespace std;
void printArray(int arr[], int i, int &n)
{
    // base case
    if (i >= n)
    {
        return;
    }
    // 1 case solve kardo
    cout << arr[i] << " ";
    // baaki recursion sambhal lega
    printArray(arr, i + 1, n);
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;

    printArray(arr, i, n);
}