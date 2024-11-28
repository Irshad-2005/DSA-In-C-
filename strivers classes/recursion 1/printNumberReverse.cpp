// print number n to 1
#include <iostream>
using namespace std;
void print(int i, int n)
{
    // base case for
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    print(i - 1, n);
}
int main()
{
    int n = 5;
    print(n, n);
    return 0;
}