// cut into seqments (solution  ->2)

#include <iostream>
#include <limits.h>
using namespace std;
int solve(int n, int x, int y, int z)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    int ans1 = INT_MIN;
    if (n - x >= 0)
    {
        ans1 = solve(n - x, x, y, x) + 1;
    }
    int ans2 = INT_MIN;
    if (n - y >= 0)
    {
        ans2 = solve(n - y, x, y, z) + 1;
    }
    int ans3 = INT_MIN;
    if (n - z >= 0)
    {
        ans3 = solve(n - z, x, y, z) + 1;
    }

    int ans = max(ans1, max(ans2, ans3));

    return ans;
}
int main()
{
    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;
    int ans = solve(n, x, y, z);
    cout << ans << endl;
    if (ans < 0)
    {
        ans = 0;
    }
    cout << "Answer is : " << ans << endl;
    return 0;
}
