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
Node *insertIntoBST(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {
        // left side
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
        cin >> data;
    }
}
void levelOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        cout << "BST are empty " << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

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
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void findMini(Node *root, int &mini)
{
    // root are null then return
    if (root == NULL)
    {
        return;
    }

    // check are minimun value in bst
    mini = min(root->data, mini);

    // call the recursion left side bst
    findMini(root->left, mini);
}
int main()
{
    Node *root = NULL;
    takeInput(root);
    // levelOrderTraversal(root);
    int mini = INT32_MAX;
    findMini(root, mini);
    cout << "minimun value of bst : " << mini << endl;
    return 0;
}