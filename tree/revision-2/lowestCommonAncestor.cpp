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
    cout << "Enter the value of tree : ";
    cin >> value;

    if (value == -1)
    {
        return NULL;
    }

    Node *root = new Node(value);

    cout << "Enter the value of tree on Leftside : " << value << endl;
    root->left = buildTree();

    cout << "Enter the value of tree on Rightside : " << value << endl;
    root->right = buildTree();

    return root;
}

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }

    // current element check are element is equal to p and q
    if (root->data == p->data)
    {
        return root;
    }
    if (root->data == q->data)
    {
        return root;
    }

    // call recursion to subtree left and right side
    Node *leftAns = lowestCommonAncestor(root->left, p, q);
    Node *rightAns = lowestCommonAncestor(root->right, p, q);

    // check to common ancestor on tree
    if (leftAns == NULL && rightAns == NULL)
    {
        return NULL;
    }

    else if (leftAns != NULL && rightAns == NULL)
    {
        return leftAns;
    }
    else if (leftAns == NULL && rightAns != NULL)
    {
        return rightAns;
    }
    else
    {
        return root;
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    Node *p = new Node(16);
    Node *q = new Node(15);

    Node *ans = lowestCommonAncestor(root, p, q);

    cout << "Lowest Common Ancestor is : " << ans->data;

    return 0;
}