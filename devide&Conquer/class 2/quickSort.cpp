#include <iostream>
using namespace std;

int partation(int arr[], int s, int e)
{

    // partation logic
    // step 1 : choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[pivotIndex];
    // find the right position of pivot element
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= arr[pivotIndex])
            count++;
    }
    // jab mai loop se bahar aaya to mere pass pivot ka right position ka index ready hai
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;
    // pivot ke left side chhote element and right side bade element

    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        // 2 case ho sakta hai
        // 1 : you find the element and swap
        // 2 : no need to swap
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int p = partation(arr, s, e);
    // left position ke lite recursion call
    quickSort(arr, s, p - 1);
    // right position  ke liye recursion call
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {8, 3, 4, 5, 5, 5, 5, 5, 5, 1, 20, 50, 30};
    int s = 0;
    int n = 13;
    int e = n - 1;
    quickSort(arr, s, e);

    for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}