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

void printOfTreeLOT(Node *root)
{
    queue<Node *> q;
    // initial value
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // create a temp and store front value of queue
        Node *temp = q.front();
        // pop value of queue
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
            // print the ans
            cout << temp->data << " ";
            // insert the child value
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
    Node *root = buildTree();
    printOfTreeLOT(root);

    cout << endl;

    return 0;
}