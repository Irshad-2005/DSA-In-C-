#include <iostream>
using namespace std;
void solve(string &str, int index, char Occ, int &OccIndex)
{
  // base case
  if (index >= str.length())
  {
    return;
  }

  // 1 case solve karo
  if (str[index] == Occ)
  {

    OccIndex = index;
  }
  // recursion calls
  solve(str, index + 1, Occ, OccIndex);
}
int main()
{
  string str = "abcd";
  int index = 0;
  char Occ = 'd';
  int OccIndex = 0;
  solve(str, index, Occ, OccIndex);

  cout << "Last Occurence of String  " << str << " : " << OccIndex << endl;
  return 0;
}