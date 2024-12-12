//! build a tree using inOrder and postOrder traversal
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
Node *buildTreeinOrderpostOrder(int inOrder[], int postOrder[], int size, int &postOrderIndex, int inOrderStartingIndex, int inOrderEndingIndex)
{
    // base case
    if (postOrderIndex < 0 || inOrderStartingIndex > inOrderEndingIndex)
    {
        return NULL;
    }

    // create a root node
    int element = postOrder[postOrderIndex];
    postOrderIndex--;
    Node *root = new Node(element);
    int pos = findPosition(root, inOrder, size);
    root->right = buildTreeinOrderpostOrder(inOrder, postOrder, size, postOrderIndex, pos + 1, inOrderEndingIndex);
    root->left = buildTreeinOrderpostOrder(inOrder, postOrder, size, postOrderIndex, inOrderStartingIndex, pos - 1);

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
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    int inOrder[] = {30, 20, 40, 10, 50, 60};
    int postOrder[] = {30, 40, 20, 60, 50, 10};
    int size = 6;
    int postOrderIndex = size - 1;
    int inOrderStartingIndex = 0;
    int inOrderEndingIndex = size - 1;

    Node *root = buildTreeinOrderpostOrder(inOrder, postOrder, size, postOrderIndex, inOrderStartingIndex, inOrderEndingIndex);
    levelOrderTraversal(root);
    cout << endl;
    return 0;
}