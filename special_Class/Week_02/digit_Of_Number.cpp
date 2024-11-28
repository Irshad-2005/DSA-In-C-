// print digit of a Number

// i/p = 625
// o/p = 526

#include <iostream>
using namespace std;
int main()
// {
//     int n;
//     cin >> n;
//     int rem = 0;

//     while (n != 0)
//     {
//         rem = n % 10;
//         cout << rem << " ";
//         n = n / 10;
//     }
//     return 0;
// }
{
    int n;
    cin >> n;
    int rem = 0;
    while (n > 0)
    {
        rem = n % 10;
        cout << rem << " ";
        n = n / 10;
    }

    return 0;
}