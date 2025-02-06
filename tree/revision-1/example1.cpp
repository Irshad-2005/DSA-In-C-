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

    cout << "enter the value of tree leftside : " << value << endl;

    root->left = buildTree();
    cout << "enter the value of tree rightside : " << value << endl;

    root->right = buildTree();

    return root;
}

void LevelOrderTraversal(Node *root)
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
        // front se node nikalo
        Node *temp = q.front();
        // queue ko pop kr do
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
            // answer print kar do
            cout << temp->data << " ";

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
    Node *root = NULL;
    root = buildTree();
    LevelOrderTraversal(root);
    return 0;
}