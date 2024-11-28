#include <iostream>
using namespace std;
int findSqrt(int n)
{
    int target = n;
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid > target)
        {
            // left searching
            end = mid - 1;
        }
        if (mid * mid < target)
        {
            // store ans
            ans = mid;
            // right searching
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int ans = findSqrt(n);
    // cout << "Square root of : " << ans << endl;
    double finalans = ans;
    double step = 0.1;
    int precision;
    cout << "Enter the floating value : ";
    cin >> precision;
    for (int i = 0; i < precision; i++)
    {
        cout << i;
        for (double j = finalans; j * j <= n; j = j + step)
        {
            finalans = j;
        }
        step = step / 10;
    }
    cout << "Sqaure root final value : " << finalans << endl;
    return 0;
}