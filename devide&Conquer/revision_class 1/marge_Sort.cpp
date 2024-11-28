#include <iostream>
#include <vector>
using namespace std;
void marge(vector<int> &arr, int s, int e)
{
    int mid = (s + e) / 2;
    // length find out
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    // array create left side AND right side
    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    // copy array left side
    int k = s;
    for (int i = 0; i < leftLength; i++)
    {
        leftArr[i] = arr[k++];
    }
    k = mid + 1;
    // copy array right side
    for (int i = 0; i < rightLength; i++)
    {
        rightArr[i] = arr[k++];
    }

    // marge ka logic
    int leftArrIndex = 0;
    int rightArrIndex = 0;
    int mainArrIndex = s;
    while (leftArrIndex < leftLength && rightArrIndex < rightLength)
    {
        if (leftArr[leftArrIndex] < rightArr[rightArrIndex])
        {
            arr[mainArrIndex++] = leftArr[leftArrIndex++];
        }
        else
        {
            arr[mainArrIndex++] = rightArr[rightArrIndex++];
        }
    }

    // remaining array copy
    while (leftArrIndex < leftLength)
    {
        arr[mainArrIndex++] = leftArr[leftArrIndex++];
    }

    while (rightArrIndex < rightLength)
    {
        arr[mainArrIndex++] = rightArr[rightArrIndex++];
    }
}
void margeSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // left side array
    margeSort(arr, s, mid);
    // right side array
    margeSort(arr, mid + 1, e);

    // marge function calls
    marge(arr, s, e);
}
int main()
{
    vector<int> arr = {1, 3, 5, 2, 8, 4};
    int s = 0;
    int e = arr.size() - 1;

    margeSort(arr, s, e);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}