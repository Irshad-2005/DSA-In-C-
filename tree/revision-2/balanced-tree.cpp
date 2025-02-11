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

    cout << "enter the value of tree in leftSide : " << value << endl;
    root->left = buildTree();

    cout << "enter the value of tree in rightSide : " << value << endl;
    root->right = buildTree();

    return root;
}

int Height(Node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // calculate of height in left and right subtree
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);

    int height = 1 + max(leftHeight, rightHeight);

    return height;
}
bool checkBalancedTree(Node *root)
{
    // base case
    if (root == NULL)
    {
        return true;
    }

    // find height of left and right subtree
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);

    // calculate of diffent to left and right subTree
    int diff = abs(leftHeight - rightHeight);

    // check tree are balanced or not
    bool ans1 = (diff <= 1);

    // find answer of left and right subtree

    bool leftAns = checkBalancedTree(root->left);
    bool rightAns = checkBalancedTree(root->right);

    if (ans1 && leftAns && rightAns)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    bool ans = checkBalancedTree(root);

    if (ans)
    {
        cout << "Tree are Balanced Tree " << endl;
    }
    else
    {
        cout << "Tree are not Balanced Tree" << endl;
    }
    cout << "Answer is : " << ans << endl;

    return 0;
}