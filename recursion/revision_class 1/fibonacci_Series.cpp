#include <iostream>
using namespace std;

int fib(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    // recursion calls
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = fib(n);

    cout << n << "th turm is : " << ans << endl;
    return 0;
}