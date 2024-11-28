#include <iostream>
using namespace std;
int findLastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int index = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            index = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}
int main()
{
    int arr[] = {2, 3, 4, 4, 4, 4, 5, 6, 7};
    int size = 9;
    int key = 4;
    int ans = findLastOccurence(arr, size, key);
    cout << "Last Occurence is key : " << ans << endl;
    return 0;
}