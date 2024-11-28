#include <iostream>
using namespace std;
void solve(int arr[])
{
    arr[0] = 50;
}

void update(int *ptr)
{
    *ptr = *ptr + 10;
}
int main()
{

    // int arr[10] = {0};
    // cout << "Size of arr :" << sizeof(arr) << endl;
    // solve(arr);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    int a = 5;
    int *ptr = &a;
    update(ptr);
    cout << a << endl;
    return 0;
}