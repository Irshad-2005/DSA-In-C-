#include <iostream>
using namespace std;

void update(int *p, int *q)
{
    *p = 300;
    *q = 500;
}
int main()
{
    int arr[50] = {10, 20, 30, 40, 50};
    int *p = &arr[2];
    int *q = &arr[4];
    update(p, q);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}