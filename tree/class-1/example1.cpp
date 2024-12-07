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

Node *buildTree()
{
    int data;
    cout << "enter the data of tree" << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // Step : A create a root node
    Node *root = new Node(data);

    // Step : B call recursion left side
    cout << "tree left side enter data : " << data << endl;
    root->left = buildTree();

    // Step : C call recursion right side
    cout << "tree right side enter data : " << data << endl;
    root->right = buildTree();

    return root;
}

int main()
{
    Node *root = buildTree();

    cout << endl;

    return 0;
}