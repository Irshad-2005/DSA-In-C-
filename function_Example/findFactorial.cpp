#include <iostream>
using namespace std;
int findFactorial(int);
int main()
{
    int n;
    cout << "Value of n : ";
    cin >> n;

    int factorial = findFactorial(n);
    cout << "Factorial of " << n << " number  : " << factorial << endl;
    return 0;
}

int findFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
