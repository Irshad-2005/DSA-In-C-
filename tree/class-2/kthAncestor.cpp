//! find Kth Ancestor of binary tree

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

bool kthAncestor(Node *root, int &p, int &k)
{
    // base case
    if ((root == NULL))
    {
        return false;
    }
    if (root->data == p)
    {
        return true;
    }
    // 1 case solve kro
    bool leftAns = kthAncestor(root->left, p, k);
    bool rightAns = kthAncestor(root->right, p, k);

    if (leftAns || rightAns)
    {
        k--;
    }

    if (k == 0)
    {
        cout << "ans : " << root->data << endl;
        k = -1;
        return leftAns || rightAns;
    }
}

int main()
{
    Node *root = buildTree();
    int p = 7;
    int k = 2;
    kthAncestor(root, p, k);

    return 0;
}