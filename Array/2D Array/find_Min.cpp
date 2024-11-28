#include <bits/stdc++.h>
using namespace std;
int findMini(int arr[][3], int row, int col, int min)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int arr[3][3] = {{1, 5, 7}, {8, -5, 4}, {5, 6, 2}};
    int row = 3;
    int col = 3;
    int min = INT_MAX;
    int ans = findMini(arr, row, col, min);
    cout << "Minimim value of : " << ans << endl;
    return 0;
}