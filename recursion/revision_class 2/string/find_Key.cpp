#include <iostream>
using namespace std;
bool findKey(string &str, int i, int &n, char &key)
{
    // base case
    if (i >= n)
    {
        return false;
    }
    // 1 case solve kar do
    if (str[i] == key)
    {
        return true;
    }
    // baki sab recursion  sambhal lega
    return findKey(str, i + 1, n, key);
}
int main()
{
    string str = "IRSHAD";
    int n = str.length();
    int i = 0;
    char key = 'A';

    bool ans = findKey(str, i, n, key);
    (ans == true) ? cout << "Key are present" << endl : cout << "Key are not present" << endl;
    return 0;
}