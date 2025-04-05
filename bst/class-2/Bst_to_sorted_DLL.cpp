// BST Convert to Sorted DLL
#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

void BstToSortedDLL(Node *root, Node *&head)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // call the recursion to right subtree
    BstToSortedDLL(root->right, head);

    // attched to node in DLL
    root->right = head;

    if (head != NULL)
    {
        head->left = root;
    }

    // updated the head
    head = root;

    // call the recusion to left subtree
    BstToSortedDLL(root->left, head);
}
Node *sortedLLIntoBst(Node *&head, int n)
{
    // base case
    if (n <= 0 || head == NULL)
    {
        return NULL;
    }

    // call the recursion in left subtree
    Node *leftSubTree = sortedLLIntoBst(head, n - 1 - n / 2);

    // create a root node
    Node *root = head;
    root->left = leftSubTree;

    // updated head
    head = head->right;

    // call the recursion in right subtree

    root->right = sortedLLIntoBst(head, n / 2);

    return root;
}

void levelOrderTraversal(Node *root)
{

    // base case
    if (root == NULL)
    {
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

Node *insertBST(Node *root, int data)
{
    if (root == NULL)
    {
        // first node create
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {
        root->left = insertBST(root->left, data);
    }
    else
    {
        root->right = insertBST(root->right, data);
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
        root = insertBST(root, data);
        cout << "Enter the value of BST : ";
        cin >> data;
    }
}
void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
}
int main()
{
    Node *root = NULL;
    takeInput(root);
    cout << "printing bst in level order traversal " << endl;

    levelOrderTraversal(root);
    Node *head = NULL;
    BstToSortedDLL(root, head);
    cout << "printing the sorted LL  " << endl;
    printLL(head);
    cout << endl;
    Node *root1 = NULL;
    root1 = sortedLLIntoBst(head, 8);
    cout << "printing the bst :" << endl;
    levelOrderTraversal(root1);
    cout << endl;

    return 0;
}