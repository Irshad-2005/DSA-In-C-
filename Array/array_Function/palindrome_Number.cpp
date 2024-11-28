#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    int reverseNum = 0;
    int dup = n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n = n / 10;
    }
    if (dup == reverseNum)
    {
        cout << "Number is a palindrome " << endl;
    }
    else
    {
        cout << "Number is not palindrome  " << endl;
    }
    return 0;
}