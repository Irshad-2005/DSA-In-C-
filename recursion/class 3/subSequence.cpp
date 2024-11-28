#include <iostream>
using namespace std;
void subSequences(string &str, int i, int &n, string output)
{
    // base case
    if (i == n)
    {
        cout << output << endl;
        return;
    }
    //  exclude
    subSequences(str, i + 1, n, output);

    // include
    subSequences(str, i + 1, n, output + str[i]);
}
int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    int n = str.size() - 1;
    subSequences(str, i, n, output);
    return 0;
}