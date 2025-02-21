// build tree using inOrder and preOrder

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
        left = NULL;
        right = NULL;
    }
};

int findPos(int inorder[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (inorder[i] == element)
        {
            return i;
        }
    }

    return -1;
}
Node *buildTreeFromInOrderPreOrder(int inorder[], int preorder[], int size, int &preIndex, int inorderIndexStart, int inorderIndexEnd)
{
    // base case
    if (preIndex >= size || inorderIndexStart > inorderIndexEnd)
    {
        return NULL;
    }

    // step : A -> pick a element in preOrder array
    int element = preorder[preIndex++];

    // step : B -> create a new Node

    Node *root = new Node(element);

    // step : C -> find a position to inorder array
    int pos = findPos(inorder, size, element);

    // step : D -> call the recursion leftside on tree
    root->left = buildTreeFromInOrderPreOrder(inorder, preorder, size, preIndex, inorderIndexStart, pos - 1);

    // step : E ->call the recursion rightside on tree
    root->right = buildTreeFromInOrderPreOrder(inorder, preorder, size, preIndex, pos + 1, inorderIndexEnd);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    // base case
    if (root == NULL)
    {
        return;
    }
    while (!q.empty())
    {
        // pick the data in queue
        Node *Temp = q.front();
        // pop the in queue
        q.pop();

        if (Temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << Temp->data << " ";

            if (Temp->left != NULL)
            {
                q.push(Temp->left);
            }
            if (Temp->right != NULL)
            {
                q.push(Temp->right);
            }
        }
    }
}
int main()
{
    int inorder[] = {9, 3, 15, 20, 7};
    int preorder[] = {3, 9, 20, 15, 7};
    int size = 5;
    int preIndex = 0;
    int inorderIndexStart = 0;
    int inorderIndexEnd = size - 1;

    Node *root = buildTreeFromInOrderPreOrder(inorder, preorder, size, preIndex, inorderIndexStart, inorderIndexEnd);

    levelOrderTraversal(root);

    return 0;
}