#include <iostream>
using namespace std;
int findKey(string &str, int i, int &n, char key, int counter)
{
    // base case
    if (i >= n)
    {
        return counter;
    }

    // 1 case solve kar do
    if (str[i] == key)
    {
        counter++;
    }

    // baki sab recursion sambhal lega
    return findKey(str, i + 1, n, key, counter);
}
int main()
{
    string str = "babbar";
    int n = str.length();
    int i = 0;
    char key = 'a';
    int counter = 0;

    int ans = findKey(str, i, n, key, counter);
    cout << "Answer is  : " << ans << endl;
    return 0;
}