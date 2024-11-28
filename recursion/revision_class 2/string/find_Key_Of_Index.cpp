#include <iostream>
using namespace std;
int findIndex(string &str, int i, int &n, char &key)
{
    // base case
    if (i >= n)
    {
        return -1;
    }
    // 1 case solve kar do
    if (str[i] == key)
    {
        return i;
    }
    // baki sab recursion sambhal lega
    return findIndex(str, i + 1, n, key);
}

int main()
{
    string str = "irshad";
    int n = str.length();
    int i = 0;
    char key = 'h';
    int ans = findIndex(str, i, n, key);

    cout << "Index of key : " << ans << endl;
    return 0;
}