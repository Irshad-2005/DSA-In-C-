#include <iostream>
using namespace std;

void countingPrint(int n)
{
    // base code
    if (n == 0)
    {
        return;
    }

    // R.R
    countingPrint(n - 1);
    // processing
    cout << n << " ";
}
int main()
{

    int n;
    cin >> n;
    countingPrint(n);
    return 0;
}