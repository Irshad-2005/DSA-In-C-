#include <iostream>
using namespace std;
int findPeakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int main()
{
    int arr[] = {0, 10, 5, 2};
    int size = 4;

    int ans = findPeakElement(arr, size);
    cout << "peak Element is : " << ans << endl;
    return 0;
}