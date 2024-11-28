#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[3][3];
    // arr[0][1] = 5;
    // cout << arr[0][1] << endl;

    // int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3;
    // int col = 3;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int crr[2][2];
    // int rows = 2;
    // int cols = 2;
    // // take input
    // cout << "input 2D array" << endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> crr[i][j];
    //     }
    // }
    // cout << "Priting Array" << endl;
    // // priting 2D Array row wise
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << crr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int arr[3][3];
    // int row = 3;
    // int col = 3;
    // // take input
    // cout << "Input Array : " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // // priting column wise
    // cout << "Ouput Array : " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    int brr[4][4];
    int row = 4;
    int col = 4;
    cout << "Input 2D Array Column wise: " << endl;
    // take input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> brr[j][i];
        }
    }

    cout << "Output print row wise : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}