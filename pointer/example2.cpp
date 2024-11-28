#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;

    cout << "value of a : " << a << endl;
    cout << "address of a :" << &a << endl;
    cout << "value store at location : " << *ptr << endl;
    cout << "value of ptr : " << ptr << endl;
    cout << "address of ptr : " << &ptr << endl;
    cout << sizeof(ptr) << endl;
    return 0;
}