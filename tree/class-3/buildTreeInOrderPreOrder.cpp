//! building a tree using inOrder and preOrder traversal
#include <iostream>
#include <queue>
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
        this->left = NULL;
        this->right = NULL;
    }
};
int findPosition(Node *root, int inOrder[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (root->data == inOrder[i])
        {
            return i;
        }
    }
    return -1;
}
Node *buildTreeInOrderPreOrder(int inOrder[], int preOrder[], int size, int &preOrderIndex, int inOrderStartingIndex, int inOrderEndingIndex)
{
    // base case
    if (preOrderIndex > size || inOrderStartingIndex > inOrderEndingIndex)
    {
        return NULL;
    }

    // create a root node
    int element = preOrder[preOrderIndex];
    preOrderIndex++;
    Node *root = new Node(element);
    // find the position 0n root element in inOrder
    // TODO: optimization using map
    int pos = findPosition(root, inOrder, size);
    root->left = buildTreeInOrderPreOrder(inOrder, preOrder, size, preOrderIndex, inOrderStartingIndex, pos - 1);
    root->right = buildTreeInOrderPreOrder(inOrder, preOrder, size, preOrderIndex, pos + 1, inOrderEndingIndex);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    if (root == NULL)
    {
        return;
    }
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl
                 << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data;
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    int inOrder[] = {3, 1, 4, 5, 2};
    int preOrder[] = {5, 1, 3, 4, 2};
    int size = 5;
    int preOrderIndex = 0;
    int inOrderStartingIndex = 0;
    int inOrderEndingIndex = size - 1;
    Node *root = buildTreeInOrderPreOrder(inOrder, preOrder, size, preOrderIndex, inOrderStartingIndex, inOrderEndingIndex);
    levelOrderTraversal(root);
    cout << endl;
    return 0;
}