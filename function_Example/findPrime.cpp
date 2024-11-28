#include <iostream>
using namespace std;
void findPrime(int);
int main()
{
    int n;
    cout << "Value of n : ";
    cin >> n;
    findPrime(n);
    return 0;
}

void findPrime(int n)
{
    if (n % 2 == 0)
    {
        cout << "Number is not prime" << endl;
    }
    else
    {
        cout << "Number is Prime " << endl;
    }
}