#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();

    for (int round = 1; round < n; round++)
    {
        // step A
        int value = arr[round];
        int j = round - 1;
        for (; j >= 0; j--)
        {
            // step B
            if (arr[j] > value)
            {
                // step C
                arr[j + 1] = arr[j];
            }
            else
            {
                // rukna hai
                break;
            }
        }
        // step D
        arr[j + 1] = value;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}