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
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {
        // left
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}
void findMaxi(Node *root, int &maxi)
{
    if (root == NULL)
    {
        return;
    }

    // find the maximun value in bst
    maxi = max(root->data, maxi);

    findMaxi(root->right, maxi);
}
void takeInputBST(Node *&root)
{
    int data;
    cout << "Enter the value of BST : ";
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node *root = NULL;
    takeInputBST(root);
    int maxi = INT16_MIN;
    findMaxi(root, maxi);
    cout << "Maximun value of bst : " << maxi << endl;

    return 0;
}