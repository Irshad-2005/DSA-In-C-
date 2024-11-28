#include <iostream>
#include <limits.h>
using namespace std;
int solve(int target, int x, int y, int z)
{
    // base case
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MIN;
    }

    int a = solve(target - x, x, y, z) + 1;
    int b = solve(target - y, x, y, z) + 1;
    int c = solve(target - z, x, y, z) + 1;

    int maxi = max(a, max(b, c));

    return maxi;
}
int main()
{
    int target = 8;
    int x = 5;
    int y = 3;
    int z = 2;
    int ans = solve(target, x, y, z);
    if (ans < 0)
        ans = 0;
    cout << "Answer is : " << ans << endl;
    return 0;
}