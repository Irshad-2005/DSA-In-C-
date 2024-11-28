#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 0};
    int size = 4;
    int start = 0;
    int end = size - 1;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            start++;
        }
        if (arr[i] == 1)
        {
            swap(arr[start], arr[i]);
            start++;
        }

        else
        {
            swap(arr[end], arr[i]);
            end--;
        }
    }

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "Hello" << endl;

    return 0;
}