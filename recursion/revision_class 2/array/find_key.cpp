#include <iostream>
using namespace std;
bool findKey(int arr[], int i, int n, int key)
{
    // base case
    if (i >= n)
    {
        return false;
    }

    // 1 case solve kardo
    if (arr[i] == key)
    {
        return true;
    }
    // baaki sab recursion sambhal lega
    return findKey(arr, i + 1, n, key);
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    int key = 30;
    bool ans = findKey(arr, i, n, key);
    (ans == true) ? cout << "Key are present" << endl : cout << "key are not present" << endl;
}