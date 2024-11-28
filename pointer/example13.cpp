#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int &b = a;
    // cout << a << endl;
    // cout << b << endl;
    // cout << "address of a : " << &a << endl;
    // cout << "address of b : " << &b << endl;

    int x = 10;
    int &y = x;
    cout << x << endl;
    cout << y << endl;
    x++;
    cout << x << endl;
    cout << y << endl;
    y++;
    cout << x << endl;
    cout << y << endl;

    return 0;
}