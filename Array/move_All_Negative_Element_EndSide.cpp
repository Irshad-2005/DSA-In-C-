#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, -2, 5, 2, -3, -4, 8};
    int size = 7;
    int start = 0;
    int end = size - 1;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] < 0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
        else
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }
    return 0;
}