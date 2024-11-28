#include <iostream>
using namespace std;

int main()
{
    //     int x = 10;
    //     int *p = &x;
    //     int **q = &p;

    //     cout << "value of x :" << x << endl;
    //     cout << "address value of : " << &x << endl;
    //     cout << "value of p : " << p << endl;
    //     cout << "value at  p : " << *p << endl;
    //     cout << "address of  p :" << &p << endl;
    //     cout << "value of q :" << q << endl;
    //     cout << "value at q :" << **q << endl;
    //     cout << "address of q :" << &q << endl;

    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;

    cout << "value of a :" << endl;
    cout << a << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;
    cout << ***ptr3 << endl;
    cout << ****ptr4 << endl;
    cout << *****ptr5 << endl;

    cout << "value of Ptr1 : " << endl;
    cout << ptr1 << endl;
    cout << *ptr2 << endl;
    cout << **ptr3 << endl;
    cout << ***ptr4 << endl;
    cout << ****ptr5 << endl;

    cout << "value of ptr2 :" << endl;
    cout << ptr2 << endl;
    cout << *ptr3 << endl;
    cout << **ptr4 << endl;
    cout << ***ptr5 << endl;

    cout << "value of ptr3 : " << endl;
    cout << ptr3 << endl;
    cout << *ptr4 << endl;
    cout << **ptr5 << endl;

    cout << "value of ptr4 : " << endl;
    cout << ptr4 << endl;
    cout << *ptr5 << endl;

    cout << "value of ptr5 : " << endl;
    cout << *ptr5 << endl;
    return 0;
}