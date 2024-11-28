#include <iostream>
using namespace std;
void printPrime(int);
int main()
{
    int n;
    cout << "Value of n : ";
    cin >> n;
    printPrime(n);
    return 0;
}

void printPrime(int n)
{
    for (int i = 1; i <= n; i += 2)
    {
        cout << "Prime Number is : " << i << endl;
    }
}