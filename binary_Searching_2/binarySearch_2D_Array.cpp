#include <iostream>
using namespace std;
bool binarySearch(int arr[][5], int rows, int cols, int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        int element = arr[rowIndex][colIndex];
        if (element == target)
        {
            cout << "found at index " << rowIndex << "  " << colIndex << endl;
            return true;
        }
        if (element > target)
        {
            // left searching
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
int main()
{
    int arr[4][5] = {{1, 3}};
    int rows = 1;
    int cols = 2;
    int target = 3;
    bool ans = binarySearch(arr, rows, cols, target);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}