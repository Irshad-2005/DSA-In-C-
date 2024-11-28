#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 50, 60, 70};
    int sum = 80;
    // outer loop

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // inner loop
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (element + arr[j] == sum)
            {
                cout << "(" << element << "," << arr[j] << ")"
                     << " ";
            }
        }
    }
    return 0;
}