#include <iostream>
using namespace std;
int fact(int);
int combination(int, int);
int main()
{
    int n, r;
    cout << "Enter the value of n or r : ";
    cin >> n >> r;

    int nCr = combination(n, r);
    cout << "Combination of " << nCr << endl;
    return 0;
}
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
