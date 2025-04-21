#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    char data;
    int count;
    Node(char ch, int c)
    {
        data = ch;
        count = c;
    }
};
class compare
{
public:
    bool operator()(Node a, Node b)
    {
        return a.count < b.count;
    }
};
string recorganizeString(string s)
{
    priority_queue<Node, vector<Node>, compare> maxHeap;

    int freaq[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        freaq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freaq[i] != 0)
        {
            Node temp(i + 'a', freaq[i]);
            maxHeap.push(temp);
        }
    }
    string ans = "";
    while (maxHeap.size() > 1)
    {
        Node first = maxHeap.top();
        maxHeap.pop();
        Node second = maxHeap.top();
        maxHeap.pop();

        ans += first.data;
        ans += second.data;

        first.count--;
        second.count--;

        if (first.count != 0)
        {
            maxHeap.push(first);
        }
        if (second.count != 0)
        {
            maxHeap.push(second);
        }
    }

    if (maxHeap.size() == 1)
    {
        Node topElement = maxHeap.top();
        maxHeap.pop();
        if (topElement.count == 1)
        {
            ans += topElement.data;
        }
        else
        {
            return " ";
        }
    }
    return ans;
}

int main()
{
    string s = "aab";
    string ans = recorganizeString(s);
    cout << "Ans is : " << ans << endl;
    return 0;
}