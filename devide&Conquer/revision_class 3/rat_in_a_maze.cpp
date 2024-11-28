#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int maze[][3], int row, int col, int srcx, int srcy, vector<vector<bool>> &visited)
{

    if (((srcx >= 0 && srcx < row) && (srcy >= 0 && srcy < col)) && (maze[srcx][srcy] == 1) && (visited[srcx][srcy] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void mazeSolve(int maze[][3], int row, int col, int srcx, int srcy, vector<string> &path, vector<vector<bool>> &visited, string output)

{
    // base case
    if (srcx >= row - 1 && srcy >= col - 1)
    {
        // answer mil gya
        path.push_back(output);
        return;
    }

    // down  ----->>> srcx+1 , srcy
    if (isSafe(maze, row, col, srcx + 1, srcy, visited))
    {
        visited[srcx + 1][srcy] = true;
        mazeSolve(maze, row, col, srcx + 1, srcy, path, visited, output + "D");
        visited[srcx + 1][srcy] = false;
    }

    // left ------>>>> srcx , srcy -1
    if (isSafe(maze, row, col, srcx, srcy - 1, visited))
    {
        visited[srcx][srcy - 1] = true;
        mazeSolve(maze, row, col, srcx, srcy - 1, path, visited, output + "L");
        visited[srcx][srcy - 1] = false;
    }

    // right  ------>>>> srcx,  srcy+1
    if (isSafe(maze, row, col, srcx, srcy + 1, visited))
    {
        visited[srcx][srcy + 1] = true;
        mazeSolve(maze, row, col, srcx, srcy + 1, path, visited, output + "R");
        visited[srcx][srcy + 1] = false;
    }

    // up ------->>>> srcx-1 , srcy
    if (isSafe(maze, row, col, srcx - 1, srcy, visited))
    {
        visited[srcx - 1][srcy] = true;
        mazeSolve(maze, row, col, srcx - 1, srcy, path, visited, output + "U");
        visited[srcx - 1][srcy] = false;
    }
}
int main()
{

    int maze[3][3] = {{1, 0, 0},
                      {1, 1, 0},
                      {1, 1, 1}};
    int row = 3;
    int col = 3;
    string output = "";

    if (maze[0][0] == 0)
    {
        cout << "Path not Exists" << endl;
        return 0;
    }
    vector<string> path;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // src value ko true mark kr dete h
    visited[0][0] = true;

    mazeSolve(maze, row, col, 0, 0, path, visited, output);

    if (path.size() == 0)
    {
        cout << "Path not Exists" << endl;
    }

    for (auto i : path)
    {
        cout << i << endl;
    }

    cout << endl;

    return 0;
}