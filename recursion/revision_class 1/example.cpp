#include <iostream>
using namespace std;

void printingCounting(int n)
{
    // base case
    if (n == 0)
    {
        // rukna hai
        return;
    }

    // print n ->

    cout << n << " ";

    // recursion calls

    printingCounting(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    printingCounting(n);
    return 0;
}