#include <iostream>
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
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int value;
    cout << "Enter the of value of tree : ";
    cin >> value;

    if (value == -1)
    {
        return NULL;
    }

    Node *root = new Node(value);
    cout << "enter the value of tree left side : " << value << endl;
    root->left = buildTree();
    cout << "enter the value of tree right side : " << value << endl;
    root->right = buildTree();

    return root;
}

void postOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LRN

    // leftSide call recursion on tree
    postOrderTraversal(root->left);

    // rightSide call recursion on tree
    postOrderTraversal(root->right);

    // current Node print
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    postOrderTraversal(root);

    return 0;
}