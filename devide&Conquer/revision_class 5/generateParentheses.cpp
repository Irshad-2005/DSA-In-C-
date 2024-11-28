#include <iostream>
#include <vector>
using namespace std;
void generateParentheses(int n, int open, int close, string output, vector<string> &ans)
{
    // base case
    if (open == 0 && close == 0)
    {
        ans.push_back(output);
        return;
    }

    // include open brackets
    if (open > 0)
    {
        // include open brackets
        output.push_back('(');
        // recursion calls
        generateParentheses(n, open - 1, close, output, ans);
        // backtracking
        output.pop_back();
    }
    // include close brackets
    if (close > open)
    {
        // include close brackets
        output.push_back(')');
        // recursion calls
        generateParentheses(n, open, close - 1, output, ans);
        // backtracking
        output.pop_back();
    }
}
int main()
{
    int n = 3;
    int open = n;
    int close = n;
    string output = "";
    vector<string> ans;
    generateParentheses(n, open, close, output, ans);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}