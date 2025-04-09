#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    // find the largest index in heap
    int index = i;
    int largest = index;
    int leftChildIndex = 2 * index;
    int rightChildIndex = 2 * index + 1;

    if (leftChildIndex <= n && arr[leftChildIndex] > arr[largest])
    {
        largest = leftChildIndex;
    }
    if (rightChildIndex <= n && arr[rightChildIndex] > arr[largest])
    {
        largest = rightChildIndex;
    }

    if (index != largest)
    {

        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}
void heapSort(int arr[], int n)
{
    while (n != 1)
    {
        swap(arr[1], arr[n--]);
        heapify(arr, n, 1);
    }
}
int main()
{
    int arr[] = {-1, 12, 56, 43, 6, 78, 87, 5, 44, 3, 23, 32};
    int n = 11;
    buildHeap(arr, n);

    cout << "printing the value of heap  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    heapSort(arr, n);
    cout << "printing the value of heap  " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}