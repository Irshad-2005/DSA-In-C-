#include <iostream>
#include <string>
using namespace std;
bool compare(string str, string name)
{
    int i = 0;
    while (i < str.length())
    {
        if (str.size() != name.size())
        {
            return false;
        }
        if (str[i] != name[i])
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    string str;
    string name;
    getline(cin, str);
    getline(cin, name);
    bool ans = compare(str, name);
    cout << ans << endl;
    return 0;
}