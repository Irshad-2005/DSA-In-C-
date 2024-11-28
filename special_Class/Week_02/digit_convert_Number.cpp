
// convert to digit to number
// formula = ans *10 + digit[i]

#include <iostream>
using namespace std;
int main()
{
    /// create array;
    int digit[] = {8, 5, 3, 7};
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + digit[i];
    }
    cout << ans;
    return 0;
}
