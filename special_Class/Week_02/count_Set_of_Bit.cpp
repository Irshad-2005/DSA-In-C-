// count no. of set bit  (bit = 1)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;

    while (n != 0)
    {
        // found of one set bit
        // so increament of bit

        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "Number of set bit " << count;

    return 0;
}
