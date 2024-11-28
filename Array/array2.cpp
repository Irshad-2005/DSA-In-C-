#include <iostream>
using namespace std;
int main()
{
    // initialision of array
    int arr[] = {2, 4, 6, 8, 10};

    char brr[] = {'a', 'b', 'c', 'd', 'e'};

    int crr[5] = {10, 20, 30, 40, 50};

    int drr[10] = {1, 2, 3, 4, 5};

    // int n;
    // cin >> n; // bad way initialize of array

    // int nrr[n];

    cout << "Array is initialize Successfullay" << endl;

    //  indexing && accessing array
    cout << "index of 0 in arr = " << arr[0] << endl;
    cout << "index of 1 in arr = " << arr[1] << endl;
    cout << "index of 2 in arr = " << arr[2] << endl;

    // array print of using loop

    for (int index = 0; index < 5; index++)
    {
        cout << "index of " << index << " in arr = " << arr[index] << endl;
    }

    return 0;
}