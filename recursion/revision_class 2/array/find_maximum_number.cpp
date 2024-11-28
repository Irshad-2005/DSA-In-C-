#include <iostream>
#include <limits.h>
using namespace std;
void findMaxi(int arr[], int i, int n, int &maxi)
{
    // base case
    if (i >= n)
    {
        return;
    }
    // 1 case solve kar do
    if (arr[i] >= maxi)
    {
        maxi = arr[i];
    }
    // baki sab recursion sambhal lega
    findMaxi(arr, i + 1, n, maxi);
}
int main()
{
    int arr[5] = {10, 20, 50, 30, 40};
    int n = 5;
    int i = 0;
    int maxi = INT_MIN;
    findMaxi(arr, i, n, maxi);
    cout << "Maximum number is : " << maxi << endl;
    return 0;
}