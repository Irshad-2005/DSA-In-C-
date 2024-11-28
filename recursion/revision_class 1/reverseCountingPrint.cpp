#include <iostream>
using namespace std;

void reverseCountingPrint(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // print n ->
    cout << n << " ";
    // recursion calls
    reverseCountingPrint(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    reverseCountingPrint(n);

    return 0;
}