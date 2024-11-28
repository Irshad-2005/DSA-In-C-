// minimum number of element require to reach target element

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int solve(vector<int> arr, int target)
{
    // base case
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }

    // 1 case tum solve kro
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int target = 8;
    int ans = solve(arr, target);
    cout << ans << endl;
    return 0;
}