#include <iostream>
using namespace std;
int sumOfEvenNum(int n);
int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int ans = sumOfEvenNum(n);
    cout << "Sum of Even Number : " << ans << endl;
    return 0;
}

int sumOfEvenNum(int n)
{

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        continue;
    }
    return sum;
}