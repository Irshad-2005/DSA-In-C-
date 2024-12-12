//! Bottom view on tree using levelOrder Traversal
#include <iostream>
#include <queue>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "enter the value of tree : " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    cout << "enter the value of left side on tree : " << data << endl;
    root->left = buildTree();
    cout << "enter the value of right side on tree : " << data << endl;
    root->right = buildTree();
}

void printBottomView(Node *root)
{
    queue<pair<Node *, int>> q;
    map<int, int> bottomNode;
    // initial value
    q.push(make_pair(root, 0));
    // base case
    if (root == NULL)
    {
        return;
    }

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *temp = p.first;
        int HD = p.second;

        bottomNode[HD] = temp->data;

        if (temp->left != NULL)
        {
            q.push(make_pair(temp->left, HD - 1));
        }
        if (temp->right != NULL)
        {
            q.push(make_pair(temp->right, HD + 1));
        }
    }
    // printing the tree
    for (auto x : bottomNode)
    {
        cout << x.first << " -> " << x.second << endl;
    }
}

int main()
{
    Node *root = buildTree();
    printBottomView(root);
    cout << endl;
    return 0;
}