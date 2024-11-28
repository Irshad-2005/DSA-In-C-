#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    int col;
    cout << "Enter the value of row and col :";
    cin >> row >> col;
    vector<vector<int>> v(row, (vector<int>(col)));
    cout << "Take input of 2D vector : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cin >> v[i][j];
        }
    }

    cout << "Priting 2D vector : " << endl;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}