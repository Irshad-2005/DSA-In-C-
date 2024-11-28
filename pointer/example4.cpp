#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << ++(*ptr) << endl;
    cout << (*ptr)++ << endl;
    cout << (a = a + 2) << endl;
    cout << (*ptr = *ptr + 2) << endl;
    cout << (*ptr = *ptr * 2) << endl;
    return 0;
}