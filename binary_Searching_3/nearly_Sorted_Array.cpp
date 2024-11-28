#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid >= start && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (mid <= end && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid] > target)
        {
            // left search
            end = mid - 2;
        }
        else if (arr[mid] < target)
        {
            // right search
            start = mid + 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 80;

    int ans = solve(arr, target);
    cout << "target element " << arr[ans] << " is" << endl;
    cout << "target index " << ans << " is" << endl;
    return 0;
}