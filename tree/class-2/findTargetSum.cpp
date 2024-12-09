//! find of target sum of binary tree
#include <iostream>
#include <vector>
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

void targetSum(Node *root, int &target, vector<vector<int>> &v, vector<int> &ans, int &sum)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    // leaf node
    if (root->left == NULL && root->right == NULL)
    {
        // include
        ans.push_back(root->data);
        sum += root->data;

        // check sum is equal to target sum
        if (target == sum)
        {
            v.push_back(ans);
            return;
        }

        // exclude
        ans.pop_back();
        sum -= root->data;
    }

    // include
    ans.push_back(root->data);
    sum += root->data;

    targetSum(root->left, target, v, ans, sum);
    targetSum(root->right, target, v, ans, sum);
    // exclude
    ans.pop_back();
    sum -= root->data;
}
int main()
{
    Node *root = buildTree();
    vector<vector<int>> v;
    vector<int> ans;
    int sum = 0;
    int target = 5;

    targetSum(root, target, v, ans, sum);
    cout << v.size() << endl;
    cout << endl;
    return 0;
}