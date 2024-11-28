#include <iostream>
#include <string.h>
using namespace std;
void printPermutation(string &str, int i)
{
    // base case
    if (i >= str.length())
    {
        cout << str << endl;
        return;
    }

    // swaping
    for (int j = i; j < str.length(); j++)
    {

        // swap
        swap(str[i], str[j]);

        // recursion calls
        printPermutation(str, i + 1);

        // backtracking - to recreate original input string

        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
    return 0;
}