#include <iostream>
using namespace std;
void marge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int length1 = mid - s + 1;
    int length2 = e - mid;

    // create new array
    int *left = new int[length1];
    int *right = new int[length2];
    int k = s;
    // copy left array
    for (int i = 0; i < length1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    // copy rigth array
    for (int i = 0; i < length2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainarrayIndex = s;
    while (leftIndex < length1 && rightIndex < length2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainarrayIndex] = left[leftIndex];
            leftIndex++;
            mainarrayIndex++;
        }
        else
        {
            arr[mainarrayIndex] = right[rightIndex];

            rightIndex++;
            mainarrayIndex++;
        }
    }

    while (leftIndex < length1)
    {
        arr[mainarrayIndex] = left[leftIndex];
        leftIndex++;
        mainarrayIndex++;
    }

    while (rightIndex < length2)
    {
        arr[mainarrayIndex++] = right[rightIndex];
        rightIndex++;
        mainarrayIndex++;
    }
}
void margeSort(int *arr, int s, int e)
{
    // base case for
    if (s >= e)
    {
        return;
    }

    // mid
    int mid = s + (e - s) / 2;

    // left side
    margeSort(arr, s, mid);

    // right side
    margeSort(arr, mid + 1, e);

    marge(arr, s, e);
}
int main()
{
    int arr[] = {38, 27, 43, 3, 9, 20};
    int n = 6;
    int s = 0;
    int e = n - 1;
    margeSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}