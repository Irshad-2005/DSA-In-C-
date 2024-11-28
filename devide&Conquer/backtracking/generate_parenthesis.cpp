#include <iostream>
#include <vector>
using namespace std;
void solve(vector<string> &v, int open, int close, string output)
{
    // base case
    if (open == 0 && close == 0)
    {
        // parenthesis gerenate ho gya hai
        v.push_back(output);
        return;
    }

    // open bracket incluse
    if (open > 0)
    {
        // include
        output.push_back('(');
        // recursion call
        solve(v, open - 1, close, output);
        // backtracking
        output.pop_back();
    }

    // close bracket include

    if (close > open)
    {
        // include
        output.push_back(')');
        // recursion calls
        solve(v, open, close - 1, output);
        // backtraking
        output.pop_back();
    }
}
int main()
{
    int n = 2;
    int open = n;
    int close = n;
    vector<string> v;
    string output = "";

    solve(v, open, close, output);

    for (auto i : v)
    {
        cout << i << ",";
    }
    return 0;
}