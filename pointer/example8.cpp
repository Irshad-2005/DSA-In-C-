#include <iostream>
using namespace std;
void update(int *ptr)
{
    *(ptr + 0) = *(ptr + 0) = 100;
    *(ptr + 2) = *(ptr + 2) = 300;
    *(ptr + 4) = *(ptr + 4) = 500;
}
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Update value :" << endl;
    update(ptr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}