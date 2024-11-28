#include <iostream>
using namespace std;
bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {-1, 0, 2, -7, 8, 9, -10, 11};
    int size = 8;
    int key;
    cout << "Enter the key : ";
    cin >> key;
    bool ans = find(arr, size, key);
    if (ans == true)
    {
        cout << "found " << endl;
    }
    else
    {
        cout << "not found " << endl;
    }
    return 0;
}