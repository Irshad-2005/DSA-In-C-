#include <iostream>
#include <limits.h>
using namespace std;
void findMax(int arr[], int &n, int i, int &maxi)
{
    // base case
    if (i >= n)
        return;
    // 1 case tum solve karo
    if (arr[i] >= maxi)
        maxi = arr[i];
    // baki sab recursion solve kar dega

    findMax(arr, n, i + 1, maxi);
}
int main()
{
    int arr[10] = {5, 8, 30, 13, 26, 15, 66, 35, 20, 45};
    int n = 10;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr, n, i, maxi);
    cout << "Maximum is : " << maxi << endl;
    return 0;
}