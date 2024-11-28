#include <iostream>
#include <string>
using namespace std;
string removeAllOccurenceOfSubstring(string s, string part)
{
    int pos = s.find(part);
    cout << pos << endl;
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}
int main()
{
    string s = "axxxxyyyyb";
    string part = "xy";
    string ans = removeAllOccurenceOfSubstring(s, part);
    cout << "Answer is : " << ans << endl;
    return 0;
}