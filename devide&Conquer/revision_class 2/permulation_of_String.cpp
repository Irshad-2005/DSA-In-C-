#include <iostream>
using namespace std;
void permutation(string &str, int i)
{
    // base case
    if (i >= str.length())

    {
        cout << str << endl;
        return;
    }

    for (int j = i; j < str.length(); j++)
    {
        // swap
        swap(str[i], str[j]);
        // recursion calls
        permutation(str, i + 1);
        // backtraking -> recreate original string
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "xyz";
    int i = 0;
    permutation(str, i);
    return 0;
}