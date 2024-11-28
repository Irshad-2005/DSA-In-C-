// union of 2 array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{6, 7, 8, 9};
    vector<int> ans;

    // put all element in arr
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    // put all elemet in brr
    for (int i = 0; i < brr.size(); i++)
    {

        ans.push_back(brr[i]);
    }
    // print ans
    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }
    return 0;
}