#include <iostream>
#include <vector>
using namespace std;
void convert(int number, vector<int> &v)
{

    // base case
    if (number == 0)
    {

        return;
    }

    int digit = number % 10;
    number = number / 10;
    convert(number, v);
    // cout << digit << " ";
    v.push_back(digit);
}
int main()
{
    int number = 647;
    vector<int> v;

    convert(number, v);

    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}