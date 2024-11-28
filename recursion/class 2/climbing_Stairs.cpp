#include <iostream>
using namespace std;

int findStair(int n)
{
    // base case
    if (n == 0 || n == 1)
        return 1;
    // R.R
    int ans = findStair(n - 1) + findStair(n - 2);
    return ans;
}
int main()
{

    int n;
    cin >> n;
    int ans = findStair(n);
    cout << "Answer is : " << ans << endl;
    return 0;
}