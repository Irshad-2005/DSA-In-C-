#include <iostream>
using namespace std;
int solve(int divident, int divisor)
{
    int start = 0;
    int end = abs(divident);
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (abs(mid * divisor) == abs(divident))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) > abs(divident))
        {
            // left search
            end = mid - 1;
        }
        else if (abs(mid * divisor) < abs(divident))
        {
            // store ans
            ans = mid;
            // right search
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if ((divisor < 0 && divident < 0) || (divisor > 0 && divident > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int divident = 22;
    int divisor = 7;
    int ans = solve(divident, divisor);
    cout << " Ans is " << ans << endl;
    double finalans = ans;
    double step = 0.1;
    int precision;
    cout << "enter the value of precision : ";
    cin >> precision;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; divisor * j <= divident; j += step)
        {
            finalans = j;
        }
        step /= 10;
    }
    cout << "finalans is : " << finalans << endl;

    return 0;
}