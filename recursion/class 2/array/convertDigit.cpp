#include <iostream>
#include <vector>
using namespace std;
void convertDigit(int n, vector<int> &digits)
{
    // base case
    if (n == 0)
        return;
    // recursive relation
    int divide = n / 10;
    convertDigit(divide, digits);

    int digit = n % 10;
    digits.push_back(digit);
}
int main()
{
    int n = 647;
    vector<int> digits;
    convertDigit(n, digits);
    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << " ";
    }

    return 0;
}