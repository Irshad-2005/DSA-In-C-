#include <bits/stdc++.h>
using namespace std;
int findMixi(int arr[][3], int row, int col, int mix)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > mix)
            {
                mix = arr[i][j];
            }
        }
    }
    return mix;
}
int main()
{
    int arr[3][3] = {{3, 5, 7}, {8, 9, 2}, {11, 7, 3}};
    int row = 3;
    int col = 3;
    int mix = INT_MIN;
    int ans = findMixi(arr, row, col, mix);
    cout << "Miximun value of : " << ans << endl;

    return 0;
}