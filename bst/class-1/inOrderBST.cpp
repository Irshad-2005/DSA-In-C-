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
void inOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR

    // left sub tree
    inOrderTraversal(root->left);
    // print current node
    cout << root->data << " ";
    // right sub tree
    inOrderTraversal(root->right);
}

int main()
{
    Node *root = NULL;
    takeInput(root);
    inOrderTraversal(root);
    return 0;
}