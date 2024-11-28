#include <iostream>
#include <limits.h>
using namespace std;
void findMini(int arr[], int i, int n, int &mini)
{
    // base case
    if (i >= n)
    {
        return;
    }

    // 1 case solve kar do
    if (arr[i] <= mini)
    {
        mini = arr[i];
    }

    // baki sab recursion sambhal lega
    findMini(arr, i + 1, n, mini);
}
int main()
{
    int arr[5] = {10, 20, 13, 5, 25};
    int n = 5;
    int i = 0;
    int mini = INT_MAX;

    findMini(arr, i, n, mini);

    cout << "Minimum number is : " << mini << endl;
    return 0;
}