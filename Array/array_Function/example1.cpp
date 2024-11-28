#include <iostream>
using namespace std;
void increament(int[], int);
void printArray(int[], int);
int main()
{
    int arr[2] = {2, 5};
    int size = 2;
    increament(arr, size);
    printArray(arr, size);
    cout << endl;
    return 0;
}

void increament(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    printArray(arr, size);
}
void printArray(int arr[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
        cout << endl;
    }
}