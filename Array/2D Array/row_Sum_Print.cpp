#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    int number = 6;
    // take  input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // row wise sum print
    cout << "Printing  row wise sum " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    return 0;
}
