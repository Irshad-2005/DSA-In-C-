#include <iostream>
using namespace std;
int factorial(int n)
{
    cout << "factorial called " << n << endl;
    if (n == 1)
    {
        return 1;
    }
    int ans = n * factorial(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial is : " << ans << endl;
    return 0;
}