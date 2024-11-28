#include <iostream>
#include <string>
using namespace std;
string removeAllAdjacent(string s)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main()
{
    string s = "abbaca";
    string ans = removeAllAdjacent(s);
    cout << "Answer is : " << ans << endl;
    return 0;
}