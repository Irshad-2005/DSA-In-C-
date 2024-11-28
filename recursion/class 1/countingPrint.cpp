#include <iostream>
using namespace std;

void printCounting(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // processing
    cout << n << " ";
    // recusive call
    printCounting(n - 1);
}
int main()
{
    int n;
    cout << "enter the value of n :";
    cin >> n;
    printCounting(n);
    return 0;
}