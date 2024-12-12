//! top view on tree using levelOrder traversal

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

    cout << "enter the value of left side tree : " << data << endl;
    root->left = buildTree();
    cout << "enter the value of right side tree : " << data << endl;
    root->right = buildTree();
}

void printTopViewTree(Node *root)
{
    queue<pair<Node *, int>> q;
    map<int, int> topNode;
    // initial value of queue
    q.push(make_pair(root, 0));

    if (root == NULL)
    {
        return;
    }

    while (!q.empty())
    {
        pair<Node *, int> frontNode = q.front();
        q.pop();
        Node *temp = frontNode.first;
        int HD = frontNode.second;

        // jo bhi horizontal distance aaya h , check if hd are already exists or not
        if (topNode.find(HD) == topNode.end()) // map me horizontal distance nhi h store kro hd and node data
        {
            topNode[HD] = temp->data;
        }

        if (temp->left != NULL)
        {
            q.push(make_pair(temp->left, HD - 1));
        }
        if (temp->right != NULL)
        {
            q.push(make_pair(temp->right, HD + 1));
        }
    }

    cout << "printing top view tree" << endl;
    for (auto x : topNode)
    {
        cout << x.first << " -> " << x.second << endl;
    }
}
int main()
{
    Node *root = buildTree();
    printTopViewTree(root);
    cout << endl;
    return 0;
}