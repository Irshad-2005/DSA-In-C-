#include <bits/stdc++.h>
using namespace std;

bool findKey(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {5, 8, 7}, {9, 1, 3}};
    int row = 3;
    int col = 3;
    int key = 1;
    bool ans = findKey(arr, row, col, key);

    if (ans == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}