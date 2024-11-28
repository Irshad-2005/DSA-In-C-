#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {5, 7, 10, 20, 25, 35, 40, 41, 43, 45};
    // int *p = arr;
    // cout << &arr << endl;
    // cout << arr << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // int brr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    // cout << brr << endl;
    // cout << &brr << endl;
    // cout << brr[0] << endl;
    // cout << &brr[0] << endl;
    // int *ptr = brr;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << *ptr << endl;
    // cout << *(ptr + 3) << endl;

    int crr[5] = {5, 6, 7, 8, 9};
    int i = 0;
    int *ptr = crr;
    int *qtr = crr + 1;
    cout << crr << endl;
    cout << &crr << endl;
    cout << crr[0] << endl;
    cout << &crr[0] << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << qtr << endl;
    cout << &qtr << endl;
    cout << *qtr << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(qtr + 2) << endl;
    cout << *(qtr + 3) << endl;
    cout << crr[i] << endl;
    cout << i[crr] << endl;
    return 0;
}