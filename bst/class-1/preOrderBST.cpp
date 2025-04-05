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

Node *insertIntoBST(Node *root, int data)
{
    // root are null to create root Node
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // if value are less  than root->data
    if (root->data > data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}
void takeInput(Node *&root)
{
    int data;
    cout << "Enter the value of BST : ";
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cout << "Enter the value of BST : ";
        cin >> data;
    }
}

void preOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // NLR
    cout << root->data << " ";

    // left sub tree
    preOrderTraversal(root->left);
    // right sub tree
    preOrderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    takeInput(root);
    preOrderTraversal(root);

    return 0;
}