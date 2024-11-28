#include <bits/stdc++.h>
using namespace std;
void transpose(int transposeArray[][3], int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArray[i][j] = arr[j][i];
        }
    }
}
void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {{70, 80, 90}, {10, 20, 30}, {50, 60, 70}};
    int row = 3;
    int col = 3;
    int transposeArray[3][3];
    cout << "Before transpose 2D Array " << endl;
    printArray(arr, row, col);
    cout << "Transpose Array " << endl;
    transpose(transposeArray, arr, row, col);
    cout << "After transpose Array " << endl;
    printArray(transposeArray, row, col);

    return 0;
}