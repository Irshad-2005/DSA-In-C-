// Intersection of 2 Array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 30, 40, 50, 60};
    vector<int> brr{20, 30, 30, 70, 80, 90};
    vector<int> ans;

    // outer loop
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // inner loop
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;

                ans.push_back(element);
            }
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
    return 0;
}