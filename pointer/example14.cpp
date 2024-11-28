#include <iostream>
using namespace std;
void solve(int &a) // pass by reference
{
    a++;
}
void update(int *&p)
{
    p = p + 1;
}

int main()
{

    // int a = 10;
    // solve(a);
    // cout << a << endl;

    // int x = 10;
    // int *p = &x;
    // cout << p << endl;
    // update(p);
    // cout << p << endl;
    // cout << x << endl;

    return 0;
}