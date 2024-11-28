#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;

    *ptr = *ptr + 1;
    cout << *ptr << endl; // 6
    return 0;
}