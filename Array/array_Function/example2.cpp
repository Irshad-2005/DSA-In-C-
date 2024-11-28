#include <iostream>
using namespace std;
void increament(int[], int);
void printArray(int[], int);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    increament(arr, size);
    printArray(arr, size);

    return 0;
}

void increament(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    arr[1] = arr[1] + 20;
    arr[2] = arr[2] + 30;
    arr[3] = arr[3] + 40;
    arr[4] = arr[4] + 50;
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