#include <iostream>
using namespace std;
int cnt = 0;
void print()
{
    // base case
    if (cnt > 4)
    {
        return;
    }
    cout << cnt << " ";
    cnt++;
    print();
}
int main()
{
    int i = 0;
    print();
}