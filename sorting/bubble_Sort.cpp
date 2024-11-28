#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num{15, 18, 16, 13, 8, 7, 5, 3, 2, 0};
    int n = num.size();

    for (int round = 1; round <= n; round++)
    {
        bool flag = false;
        for (int j = 0; j < n - round; j++)
        {
            if (num[j] > num[j + 1])
            {
                flag = true;
                swap(num[j], num[j + 1]);
            }
        }
        if (flag == false)
        {
            // sorted
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}