#include <iostream>
using namespace std;
bool checkPalidrome(string &str, int s, int e)
{
    // base case
    if (s > e)
    {
        return true;
    }

    // 1 case solve kar do
    int start = (char)tolower(str[s]);
    int end = (char)tolower(str[e]);
    if (start != end)
    {
        return false;
    }
    else
    {
        s++;
        e--;
    }
    // baki sab recursion sambhal lega

    return checkPalidrome(str, s, e);
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    int s = 0;
    int e = str.length() - 1;

    bool ans = checkPalidrome(str, s, e);

    if (ans)
    {
        cout << "string is a Palidrome" << endl;
    }
    else
    {
        cout << "string is a not  Palidrome" << endl;
    }

    return 0;
}