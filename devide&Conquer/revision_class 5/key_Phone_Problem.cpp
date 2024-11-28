#include <iostream>
#include <vector>
using namespace std;
void solve(int index, string digits, string output, vector<string> &ans, vector<string> &mapping)
{
  // base case
  if (index >= digits.length())
  {
    ans.push_back(output);
    return;
  }

  // 1 case solve kar do
  int digit = digits[index] - '0';
  string value = mapping[digit];

  for (int i = 0; i < value.length(); i++)
  {
    char ch = value[i];
    output.push_back(ch);
    // recursion calls
    solve(index + 1, digits, output, ans, mapping);
    // backtracking
    output.pop_back();
  }
}
int main()
{
  vector<string> mapping(10);
  mapping[2] = "abc";
  mapping[3] = "def";
  mapping[4] = "ghi";
  mapping[5] = "jkl";
  mapping[6] = "mno";
  mapping[7] = "pqrs";
  mapping[8] = "tuv";
  mapping[9] = "wxyz";
  vector<string> ans;
  string output = "";
  string digits = "234";
  int index = 0;
  solve(index, digits, output, ans, mapping);

  for (auto x : ans)
  {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}