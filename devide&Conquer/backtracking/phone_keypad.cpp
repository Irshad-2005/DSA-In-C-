#include <iostream>
#include <vector>
using namespace std;
void solve(vector<string> &v, vector<string> &mapping, string digits, int index, string output)
{
    // base case
    if (index >= digits.length())
    {
        v.push_back(output);
        return;
    }

    int digit = digits[index] - '0';
    string value = mapping[digit];

    for (int i = 0; i < value.length(); i++)
    {
        char ch = value[i];
        // include charater
        output.push_back(ch);
        // recursion calls
        solve(v, mapping, digits, index + 1, output);
        // backtracking
        output.pop_back();
    }
}
int main()
{
    string digits = "23";
    if (digits.length() == 0)
    {
        cout << "digits is a empty" << endl;
    }
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";
    int index = 0;
    vector<string> v;
    string output = "";
    solve(v, mapping, digits, index, output);

    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}