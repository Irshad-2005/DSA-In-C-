#include <iostream>
#include <vector>
using namespace std;
void findKey(string &str, int i, int &n, char &key, vector<int> &v)
{
    // base case
    if (i >= n)
    {
        return;
    }

    // 1 case solve kar do
    if (str[i] == key)
    {
        v.push_back(i);
    }
    // baki sab recursion sambhal lega
    findKey(str, i + 1, n, key, v);
}
int main()
{
    string str = "babbar";
    char key = 'a';
    int n = str.length();
    int i = 0;
    vector<int> v;
    findKey(str, i, n, key, v);

    for (auto val : v)
    {
        cout << val << " ";
    }
}