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

Node *buildTree()
{
    int data;
    cout << "Enter the value of node : " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // Step: A -> create a root node
    Node *root = new Node(data);

    // Step:B -> left size call recursion
    cout << "tree ke left side enter data : " << root->data << endl;
    root->left = buildTree();

    // Step:C -> right size call recursion
    cout << "tree ke right side enter data : " << root->data << endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        // insert child in queue

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
int main()
{
    Node *root = buildTree();
    levelOrderTraversal(root);
    return 0;
}