//! first Non Repeating character in a queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    string str = "adefc";
    string ans;
    queue<char> q;
    int freq[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        // current char
        char ch = str[i];
        // increament freq
        freq[ch - 'a']++;
        // store a char in queue
        q.push(ch);

        while (!q.empty())
        {
            if (freq[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }

    cout << "Final ans : " << ans << endl;
    return 0;
}