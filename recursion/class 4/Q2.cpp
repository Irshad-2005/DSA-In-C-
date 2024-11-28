// minimum number of element require to reach target element

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void solve(vector<int> arr, int target, int value)
{
    // base case
    int mini = INT_MAX;
    if (target == value)
    {
        cout << value;
    }

    // 1 case tum solve kro

    for (int i = 0; i < arr.size(); i++)
    {
        solve(arr, target, target - arr[i]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int target = 8;
    int value = 0;
    solve(arr, target, value);

    return 0;
}