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
    int data;
    cout << "enter value of tree" << endl;
    cin >> data;
    if (data == -1)
        return NULL;
    // step A/B/C
    Node *root = new Node(data);

    cout << "enter the left side of tree : " << data << endl;
    root->left = buildTree();
    cout << "enter the right side of tree : " << data << endl;
    root->right = buildTree();

    return root;
}

void printOfTreeUsingLOT(Node *root)
{
    queue<Node *> q;
    // initial
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
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
        }
    }
}

int main()
{
    Node *root = buildTree();
    printOfTreeUsingLOT(root);

    cout << endl;

    return 0;
}