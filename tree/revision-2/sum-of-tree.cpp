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

    cout << "enter the value of tree in LeftSide : " << value << endl;
    root->left = buildTree();

    cout << "enter the value of tree in RightSide : " << value << endl;
    root->right = buildTree();

    return root;
}

int sumOfTree(Node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    // calculate the sum of left and right subtree
    int leftSum = sumOfTree(root->left);

    int rightSum = sumOfTree(root->right);

    // update the value of root
    root->data = root->data + leftSum + rightSum;

    // return the value of root data

    return root->data;
}

int main()
{
    Node *root = NULL;

    root = buildTree();

    int ans = sumOfTree(root);

    cout << "Answer is : " << ans << endl;

    return 0;
}