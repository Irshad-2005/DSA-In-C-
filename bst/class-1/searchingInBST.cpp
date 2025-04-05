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

bool findTarget(Node *root, int &target)
{
    // base case
    if (root == NULL)
    {
        return false;
    }

    // check are current value are equal to target value
    if (root->data == target)
    {
        return true;
    }

    if (root->data > target)
    {
        return findTarget(root->left, target);
    }
    else
    {
        return findTarget(root->right, target);
    }
}

int main()
{
    Node *root = NULL;
    takeInput(root);
    int target = 17;
    bool ans = findTarget(root, target);

    ans ? cout << "Element are found " : cout << "Element are not found ";

    return 0;
}