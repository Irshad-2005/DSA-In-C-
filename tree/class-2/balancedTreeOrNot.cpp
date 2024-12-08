//! check if binary tree is balanced tree or not

#include <iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode *bluidTree()
{
    int data;
    cout << "enter the value of tree : " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    // step : 1 create a node
    TreeNode *root = new TreeNode(data);
    // step : 2 call the recursion left side of tree
    cout << "enter the value of tree left side : " << data << endl;
    root->left = bluidTree();
    // step : 3 call the recursion right side of tree
    cout << "enter the value of tree right  side : " << data << endl;
    root->right = bluidTree();

    return root;
}
int height(TreeNode *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);
    int ans = 1 + max(left, right);
    return ans;
}
bool checkTreeBalanced(TreeNode *root)
{
    // base case
    if (root == NULL)
    {
        return true;
    }

    // 1 case solve kro
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diff = abs(leftHeight - rightHeight);
    bool ans = (diff <= 1);

    // call the recursion of left side tree
    bool leftAns = checkTreeBalanced(root->left);
    // call the recursion of right side tree
    bool rightAns = checkTreeBalanced(root->right);

    if (ans && leftAns && rightAns)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    TreeNode *root = bluidTree();
    bool ans = checkTreeBalanced(root);
    if (ans)
    {
        cout << "Binary tree is a Balanced tree" << endl;
    }
    else
    {
        cout << "Binary tree is a not Balanced tree" << endl;
    }

    cout << endl;
    return 0;
}