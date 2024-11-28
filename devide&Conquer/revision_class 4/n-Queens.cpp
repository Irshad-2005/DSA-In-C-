#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>> &Board, int row, int col, int n)
{
    // Row check

    int i = row;
    int j = col;

    while (j >= 0)
    {
        if (Board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }
    // upper left diagobal check
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (Board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }
    // bottom left diagonal check
    i = row;
    j = col;

    while (i < n && j >= 0)
    {
        if (Board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    // queen nhi  mili
    return true;
}
void printSolution(vector<vector<char>> &Board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void queenSolve(vector<vector<char>> &Board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printSolution(Board, n);
        return;
    }
    // 1 case solve kar do baki sab recursion sambhal lega
    for (int row = 0; row < n; row++)
    {
        if (isSafe(Board, row, col, n))
        {
            // rakh do
            Board[row][col] = 'Q';
            // recursion calls
            queenSolve(Board, col + 1, n);
            // backtracking
            Board[row][col] = '-';
        }
    }
}
int main()
{
    int n = 4;
    vector<vector<char>> Board(n, vector<char>(n, '-'));
    int col = 0;
    queenSolve(Board, col, n);

    return 0;
}
