#include <iostream>
#include <string>
using namespace std;
int expend(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {

        count++;
        i--;
        j++;
    }
    return count;
}
int main()
{
    string s = "abc";
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        // odd index ke liye
        int oddKaCount = expend(s, i, i);
        count += oddKaCount;
        // even index ke liye
        int evenKaCount = expend(s, i, i + 1);
        count += evenKaCount;
    }
    cout << count << endl;
    return 0;
}