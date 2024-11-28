#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }

    // recursion calls
    int ans = n * fact(n - 1);

    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n == 0)
    {
        cout << n << endl;
        return 0;
    }

    int ans = fact(n);

    cout << "factorial is : " << ans << endl;

    return 0;
}