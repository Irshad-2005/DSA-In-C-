#include <iostream>
using namespace std;
void print(int i, int n)
{
    // base case
    if (i > n)
    {
        return;
    }
    cout << "Irshad"
         << " ";
    print(i + 1, n);
}
int main()
{
    int i = 1;
    int n = 5;
    print(i, n);
    return 0;
}