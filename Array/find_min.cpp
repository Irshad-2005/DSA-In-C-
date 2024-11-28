#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {2, 5, 4, 8, 1};
    int arr[] = {-1, -5, -2, -6, -3};
    int size = 5;
    int mini = INT32_MAX;

    for (int index = 0; index < size; index++)
    {
        if (arr[index] < mini)
        {
            mini = arr[index];
        }
    }
    cout << "Minimum number of : " << mini << endl;
    return 0;
}