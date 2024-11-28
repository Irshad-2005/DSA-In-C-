#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int solve(vector<int> &arr, int target)
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

    // 1 case solve kar do
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);

        if (ans != INT_MAX)
        {
            mini = min(mini, ans + 1);
        }
    }

    return mini;
}

int main()
{
    vector<int> arr{5, 3, 1};
    int target = 8;
    int ans = solve(arr, target);

    if (ans == INT_MAX)
        ans = 0;
    cout << ans << endl;

    return 0;
}