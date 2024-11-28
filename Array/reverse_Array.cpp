#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, size);
    return 0;
}