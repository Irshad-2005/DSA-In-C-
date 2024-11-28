#include <iostream>
using namespace std;

void util(int *p) //( pass by value) its not works to actual pointer
                  // create copy to pointer and update this pointer
{
    p = p + 1;
}
int main()
{
    int a = 10;
    int *p = &a;

    util(p);
    cout << a << endl;
    return 0;
}