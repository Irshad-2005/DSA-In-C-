#include <iostream>
using namespace std;

void solve(int **q)
{
    **q = **q + 1;
}
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;

    solve(q);
    cout << a << endl;
    return 0;
}