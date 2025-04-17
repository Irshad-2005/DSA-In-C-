// complete binary tree are check is max-heap or not
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
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    // call the recursion left side
    cout << "Enter the value of left sub tree " << data << endl;
    root->left = buildTree();
    // call the recursion right side
    cout << "Enter the value of right sub tree  " << data << endl;
    root->right = buildTree();

    return root;
}

pair<bool, int> checkMaxHeap(Node *root)
{
    // base case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, INT32_MIN);
        return p;
    }

    // call the recursion left side sub tree
    pair<bool, int> leftKaAns = checkMaxHeap(root->left);

    // call the recursion right side sub tree
    pair<bool, int> rightKaAns = checkMaxHeap(root->right);

    // current node are proccessing and check is left ka ans and right ka ans
    if (leftKaAns.first && rightKaAns.first && root->data > leftKaAns.second && root->data > rightKaAns.second)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    else
    {
        pair<bool, int> p = make_pair(false, root->data);
        return p;
    }
}
int main()
{

    Node *root = NULL;
    root = buildTree();
    pair<bool, int> p = checkMaxHeap(root);
    cout << "Ans is : " << p.first << ", value is : " << p.second << endl;

    return 0;
}