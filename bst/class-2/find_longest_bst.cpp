// find the longest bst in binary tree

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

class NodeData
{
public:
    bool validBst;
    int minVal;
    int maxVal;
    int size;
    NodeData()
    {
    }
    NodeData(bool validBst, int min, int max, int size)
    {
        this->validBst = validBst;
        this->minVal = min;
        this->maxVal = max;
        this->size = size;
    }
};

NodeData *findLogestValidBst(Node *root, int &ans)
{
    // base case
    if (root == NULL)
    {
        NodeData *temp = new NodeData(true, INT32_MIN, INT32_MAX, 0);
        return temp;
    }

    // call the recursion left subtree
    NodeData *leftSubTree = findLogestValidBst(root->left, ans);

    // call the recursion right subtree
    NodeData *rightSubTree = findLogestValidBst(root->left, ans);

    // processing the current node
    NodeData *currentNode = new NodeData();

    currentNode->size = leftSubTree->size + rightSubTree->size + 1;

    currentNode->minVal = min(root->data, leftSubTree->minVal);
    currentNode->maxVal = max(root->data, rightSubTree->maxVal);

    if (leftSubTree->validBst && rightSubTree->validBst && (root->data < leftSubTree->maxVal && root->data > rightSubTree->minVal))
    {

        currentNode->validBst = true;
    }
    else
    {
        currentNode->validBst = false;
    }

    if (currentNode->validBst)
    {

        ans = max(currentNode->size, ans);
    }

    return currentNode;
}

Node *buildTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter the value of left side :" << data << endl;
    root->left = buildTree();
    cout << "Enter the value of right side : " << data << endl;
    root->right = buildTree();

    return root;
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    int ans = 0;
    NodeData *root1 = findLogestValidBst(root, ans);
    cout << "Longest bst is : " << ans << endl;
    return 0;
}