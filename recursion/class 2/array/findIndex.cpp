#include <iostream>
using namespace std;
int findIndex(string &str, int i, char &key)
{
    // base case
    if (i >= str.length())
        return -1;
    if (str[i] == key)
        return i;
    // recursive relation
    findIndex(str, i + 1, key);
}
int main()
{
    string str = "coder";
    char key = 'r';
    int i = 0;
    int ans = findIndex(str, i, key);
    cout << "Index is : " << ans << endl;
    return 0;
}