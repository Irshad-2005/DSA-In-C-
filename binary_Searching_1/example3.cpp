#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> v, int key)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key == v[mid])
        {
            return mid;
        }
        else if (key > v[mid])
        {
            // right side searching
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> v{1, 3, 4, 5, 8, 11, 13, 17, 19};
    int key = 5;
    int ans = binarySearch(v, key);
    cout << "key index is : " << ans << endl;
    return 0;
}