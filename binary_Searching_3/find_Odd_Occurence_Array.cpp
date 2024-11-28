#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start);
    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        if (mid % 2 == 0)
        {
            // even
            if (arr[mid] == arr[mid + 1])
            {
                // right size searching
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            // odd
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
}
int main()
{
    vector<int> arr{5, 5, 6, 6, 7, 7, 5, 8, 8, 9, 9};
    int ans = binarySearch(arr);
    cout << "found is odd occurence value : " << arr[ans] << endl;
    cout << "found is odd occurence index : " << ans << endl;
    return 0;
}