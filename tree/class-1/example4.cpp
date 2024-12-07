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
    int data;
    cout << "enter the data of tree" << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // Step : A create a root node
    Node *root = new Node(data);

    // Step : B call recursion left side
    cout << "tree left side enter data : " << data << endl;
    root->left = buildTree();

    // Step : C call recursion right side
    cout << "tree right side enter data : " << data << endl;
    root->right = buildTree();

    return root;
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
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
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LRN
    postOrderTraversal(root->left);  // left
    postOrderTraversal(root->right); // right
    cout << root->data << " ";       // current node print
}
int main()
{
    Node *root = buildTree();
    postOrderTraversal(root);
    cout << endl;

    return 0;
}