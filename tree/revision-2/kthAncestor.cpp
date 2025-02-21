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
    cout << "Enter the value of tree : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "enter the value of tree on leftside : " << data << endl;
    root->left = buildTree();
    cout << "enter the value of tree on rightside : " << data << endl;
    root->right = buildTree();

    return root;
}

bool kthAncestor(Node *root, int &k, int &p)
{
    // base case
    if (root == NULL)
    {
        return false;
    }

    // find the p
    if (root->data == p)
    {
        return true;
    }

    bool leftAns = kthAncestor(root->left, k, p);
    bool rightAns = kthAncestor(root->right, k, p);

    if (leftAns || rightAns)
    {
        k--;
    }
    if (k == 0)
    {
        cout << "Answer is : " << root->data << endl;
        k = -1;
        return leftAns || rightAns;
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    int k = 2;
    int p = 50;
    kthAncestor(root, k, p);

    return 0;
}