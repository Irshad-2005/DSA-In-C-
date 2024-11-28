#include <iostream>
using namespace std;
int findFirstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int index = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            // left side searching
            index = mid;
            end = mid - 1;
        }
        else
        {
            // right side
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}
int main()
{
    int arr[] = {1, 2, 4, 4, 4, 6, 8};
    int size = 7;
    int key = 4;

    int ans = findFirstOccurence(arr, size, key);
    cout << "First Occurence is : " << ans << endl;
    return 0;
}