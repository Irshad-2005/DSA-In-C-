#include <iostream>
using namespace std;
int main()
{
    // create array
    // int arr[] = {0, 2, 1, 0, 1, 0, 0, 1, 1, 1, 0, 5, 2};
    // int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0};
    int arr[] = {1, -1, 2, 0, -5, -2, 0, -2, 6, 4, 1, 0, 1};
    int size = 13;
    int numZero = 0;
    int numOne = 0;

    for (int index = 0; index < size; index++)
    {
        // check number is 0
        if (arr[index] == 0)
        {
            numZero++;
        }
        // check number is 1
        if (arr[index] == 1)
        {
            numOne++;
        }
    }
    cout << "number of 0 : " << numZero << endl;
    cout << " number of 1 : " << numOne << endl;
    return 0;
}