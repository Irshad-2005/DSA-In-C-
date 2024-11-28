#include <iostream>
using namespace std;
void print(int arr[], int n, int i)
{
    // base case
    if (i >= n)
        return;
    cout << arr[i] << " ";
    // R.R
    print(arr, n, i + 1);
}
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int n = 10;
    int i = 0;
    print(arr, n, i);

    return 0;
}