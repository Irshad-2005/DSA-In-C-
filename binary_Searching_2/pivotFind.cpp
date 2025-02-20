#include <iostream>
#include <vector>
using namespace std;
int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (arr[mid - 1] > arr[mid])

        {
            return mid - 1;
        }
        if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else if (arr[start] < arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, -15, -1, -2};
    int ans = findPivot(arr);
    cout << "Pivot Element index is " << arr[ans] << endl;
    return 0;
}