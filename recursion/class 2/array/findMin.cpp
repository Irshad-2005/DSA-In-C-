#include <iostream>
#include <limits.h>
using namespace std;
void findMin(int arr[], int &n, int i, int &mini)
{
    // base case
    if (i >= n)
        return;
    // 1 case tum solve karo
    mini = min(arr[i], mini);
    //  baki sab recursion kar dega
    findMin(arr, n, i + 1, mini);
}
int main()
{
    int arr[10] = {5, 8, 10, 13, 50, 80, 35, 3, 40, 30};
    int n = 10;
    int index = 0;
    int mini = INT_MAX;
    findMin(arr, n, index, mini);
    cout << "Minimum is : " << mini << endl;
}