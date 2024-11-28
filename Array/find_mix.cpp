#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {2, 5, 8, 9, 7, 4, 3};
    // int arr[] = {1, -2, -5, 0, 5, 9, -7};
    int arr[] = {-2, -3, -1, -8, -6, -7, -5};
    int size = 7;
    int mixi = INT32_MIN;

    for (int index = 0; index < size; index++)
    {
        if (arr[index] > mixi)
        {
            mixi = arr[index];
        }
    }
    cout << "Miximum number is : " << mixi << endl;
    return 0;
}
