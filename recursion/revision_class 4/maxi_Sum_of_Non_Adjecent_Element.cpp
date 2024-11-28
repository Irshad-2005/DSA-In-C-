#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
void solve(vector<int> &arr, int i, int sum, int &maxi)
{

    // base case
    if (i >= arr.size())
    {
        // maxi update
        maxi = max(maxi, sum);
        return;
    }

    // include
    solve(arr, i + 2, sum + arr[i], maxi);
    // exclude
    solve(arr, i + 1, sum, maxi);
}
int main()
{
    vector<int> arr = {1, 2, 3, 1};
    int i = 0;
    int sum = 0;
    int maxi = INT_MIN;

    solve(arr, i, sum, maxi);
    cout << "maximum sum of non-adjacent element : " << maxi << endl;
    return 0;
}