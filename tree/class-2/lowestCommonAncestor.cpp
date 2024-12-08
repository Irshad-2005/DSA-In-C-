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

findLowestCommonAncestor(Node *root, int p, int q)
{
    // base case
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == p)
    {
        return p;
    }
    if (root->data == q)
    {
        return q;
    }

    int left = findLowestCommonAncestor(root->left, p, q);
    int right = findLowestCommonAncestor(root->right, p, q);

    if (left == -1 && right == -1)
    {
        return -1;
    }
    else if (left != -1 && right == -1)
    {
        return left;
    }
    else if (right != -1 && left == -1)
    {
        return right;
    }
    else
    {
        return root->data;
    }
}
int main()
{
    Node *root = buildTree();
    int p = 6;
    int q = 13;
    int ans = findLowestCommonAncestor(root, p, q);
    cout << "Lowest Common Ancestor is : " << ans << endl;
    return 0;
}