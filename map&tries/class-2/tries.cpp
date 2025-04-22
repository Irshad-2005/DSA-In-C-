#include <iostream>
using namespace std;

class NodeTrie
{
public:
    char data;
    bool isTerminal;
    NodeTrie *children[26];
    NodeTrie(char d)
    {
        data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

void insertWord(NodeTrie *root, string word)
{
    // base case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    // processing
    char ch = word[0];
    int index = ch - 'a';
    NodeTrie *child;

    if (root->children[index] != nullptr)
    {
        child = root->children[index];
    }
    else
    {

        child = new NodeTrie(ch);
        root->children[index] = child;
    }

    // recursion calls
    insertWord(child, word.substr(1));
}

bool searchingWord(NodeTrie *root, string word)
{
    // base case
    if (word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    NodeTrie *child;

    if (root->children[index] != nullptr)
    {
        child = root->children[index];
    }
    else
    {
        return false;
    }

    // recursion call

    return searchingWord(child, word.substr(1));
}

void deleteWord(NodeTrie *root, string word)
{
    // base case
    if (word.length() == 0)
    {
        root->isTerminal = false;
        return;
    }

    // processing

    char ch = word[0];
    int index = ch - 'a';
    NodeTrie *child;

    if (root->children[index] != nullptr)
    {
        child = root->children[index];
    }
    else
    {
        return;
    }

    // recursion call
    deleteWord(child, word.substr(1));
}
int main()
{
    NodeTrie *root = new NodeTrie('-');
    insertWord(root, "Code");
    insertWord(root, "Coder");
    insertWord(root, "Coding");

    deleteWord(root, "Coder");
    bool ans = searchingWord(root, "Coder");

    if (ans)
    {
        cout << "Present " << endl;
    }
    else
    {
        cout << "Absent " << endl;
    }
    cout << endl;
    return 0;
}