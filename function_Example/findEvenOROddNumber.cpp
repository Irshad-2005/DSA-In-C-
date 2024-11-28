#include <iostream>
using namespace std;
void FindEvenOrOdd(int);
int main()
{
    int n;
    cout << "Value of n : ";
    cin >> n;
    FindEvenOrOdd(n);
    return 0;
}

void FindEvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}