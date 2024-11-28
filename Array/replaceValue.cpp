#include <iostream>
using namespace std;
int main()
{
    int arr[500];
    int n;
    cout << "How many  number want add in array : ";
    cin >> n;

    cout << "Enter the value of arr : ";
    for (int index = 0; index < n; index++)
    {
        cin >> arr[index];
    }
    // print value

    for (int index = 0; index < n; index++)
    {
        cout << arr[index] << " ";
    }
    cout << endl;
    cout << "Replace the value of arr " << endl;
    // replace the value of arr
    for (int index = 0; index < n; index++)
    {
        arr[index] = 1;
    }
    // print replace value
    for (int index = 0; index < n; index++)
    {
        cout << arr[index] << " ";
    }
    return 0;
}