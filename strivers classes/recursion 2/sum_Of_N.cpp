#include <iostream>
using namespace std;
int sumOfN(int n, int sum)
{
    // base case
    if (n == 0)
    {
        return sum;
    }

    // 1 case solve kar do
    sum += n;
    // baki sab recursion sambhal lega
    return sumOfN(n - 1, sum);
}
int main()
{
    int n = 5;
    int sum = 0;

    int ans = sumOfN(n, sum);
    cout << "Answer is : " << ans << endl;
    return 0;
}