#include <iostream>
using namespace std;
int stair(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // 1 case solve kardo
    // baaki sab recursion sambhal lega
    return stair(n - 1) + stair(n - 2);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = stair(n);

    cout << "Answer is : " << ans << endl;

    return 0;
}