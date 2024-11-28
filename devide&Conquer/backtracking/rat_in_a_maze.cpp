#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int maze[][4], vector<vector<bool>> &visited)
{
    if ((i >= 0 && i < row) && (j >= 0 && j < col) && (maze[i][j] == 1) && (visited[i][j] == false))
    {

        return true;
    }
    else
    {
        return false;
    }
}

void solveMaze(int maze[][4], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // base case
    if (i == row - 1 && j == col - 1)
    {
        // answer found
        path.push_back(output);

        return;
    }
    // down -> i+1,j
    if (isSafe(i + 1, j, row, col, maze, visited))
    {
        visited[i + 1][j] = true;
        solveMaze(maze, row, col, i + 1, j, visited, path, output + "D");
        visited[i + 1][j] = false;
    }

    // left -> i , j-1
    if (isSafe(i, j - 1, row, col, maze, visited))
    {
        visited[i][j - 1] = true;
        solveMaze(maze, row, col, i, j - 1, visited, path, output + "L");
        visited[i][j - 1] = false;
    }
    // right -> i , j+1
    if (isSafe(i, j + 1, row, col, maze, visited))
    {
        visited[i][j + 1] = true;
        solveMaze(maze, row, col, i, j + 1, visited, path, output + "R");
        // backtracking
        visited[i][j + 1] = false;
    }
    // up , i-1,j
    {
        if (isSafe(i - 1, j, row, col, maze, visited))
        {
            visited[i - 1][j] = true;
            solveMaze(maze, row, col, i - 1, j, visited, path, output + "U");
            visited[i - 1][j] = false;
        }
    }
}

int main()
{
    int maze[4][4] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {1, 1, 0, 0},
                      {0, 1, 1, 1}};
    if (maze[0][0] == 0)
    {
        cout << "path is not exists" << endl;
        return 0;
    }
    int row = 4;
    int col = 4;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // src ki value true mark kr dete h
    visited[0][0] = true;
    vector<string> path;
    string output = "";
    solveMaze(maze, row, col, 0, 0, visited, path, output);

    cout << "Printing path" << endl;

    if (path.size() == 0)
    {
        cout << "Path is not exists" << endl;
    }
    for (auto i : path)
    {
        cout << i << endl;
    }

    return 0;
}