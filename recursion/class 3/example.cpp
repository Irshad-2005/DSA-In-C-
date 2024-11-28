#include <iostream>
using namespace std;
void findKey(int arr[], int i, int n, int key)
{
    // base case
    if (i >= n)
    {
        cout << "false" << endl;
        return;
    }
    // 1 case tum solve kro
    if (arr[i] == key)
    {
        cout << "True" << endl;
        return;
    }
    // baki sab recursion sabhal lega
    findKey(arr, i + 1, n, key);
}
int main()
{
    int arr[6] = {10, 15, 25, 45, 35, 60};
    int key = 50;
    int n = 6;
    int i = 0;
    findKey(arr, i, n, key);
    return 0;
}