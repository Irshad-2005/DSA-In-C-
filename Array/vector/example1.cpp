#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;
    cout << "Size of vector : " << arr.size() << endl;
    cout << "Capicity of vector : " << arr.capacity() << endl;

    int ans = (sizeof(arr)) / sizeof(int);
    cout << ans << endl;

    // initialize of vector
    vector<int> brr(10);
    cout << "size of vector brr : " << brr.size() << endl;
    cout << "Capacity of vector brr : " << brr.capacity() << endl;
    // printing brr
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    // insert to vector arr
    arr.push_back(5);
    arr.push_back(10);
    // priting vector arr

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // remove & delete

    arr.pop_back();

    // priting vector arr
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<int> crr(n, -1);

    // priting vector crr
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;
    vector<int> drr{10, 20, 30, 40, 50};
    // priting vector of drr
    for (int i = 0; i < drr.size(); i++)
    {
        cout << drr[i] << " ";
    }
    cout << endl;

    cout << "Vector drr is Empty or not : " << drr.empty() << endl; // 0 -> false
    vector<int> err;
    cout << "Vector err is Empty or not : " << err.empty() << endl; // 1 -> true
    return 0;
}
