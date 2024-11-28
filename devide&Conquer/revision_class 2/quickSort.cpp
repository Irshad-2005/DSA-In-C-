#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    // pivot element choose
    int pivotIndex = s;
    int pivotElement = arr[pivotIndex];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }

    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

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
    // partition login
    int p = partition(arr, s, e);

    // recursion calls  left
    quickSort(arr, s, p - 1);
    // recursion calls right
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[8] = {8, 1, 20, 30, 6, 5, 60, 5};
    int s = 0;
    int n = 8;
    int e = n - 1;
    quickSort(arr, s, e);

    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}