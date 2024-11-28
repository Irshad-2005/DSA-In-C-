#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int index = 0;
    cout << "Enter the value of arr : ";
    while (index < 5)
    {
        cin >> arr[index];
        index++;
    }
    // index = 5

    // printing to doule
    cout << "Printing to doule " << endl;
    // index to restore in 0
    index = 0;
    while (index < 5)
    {
        cout << (2 * arr[index]) << endl;
        index++;
    }

    return 0;
}
