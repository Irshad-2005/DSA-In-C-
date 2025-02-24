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
        cout << "Enter the value of tree : ";
        cin >> data;

        if (data == -1)
        {
                return NULL;
        }

        Node *root = new Node(data);

        cout << "Enter the value of left side sub tree : " << data << endl;
        root->left = buildTree();

        cout << "Enter the value of right side sub tree : " << data << endl;
        root->right = buildTree();

        return root;
}
void rightView(Node *root, int level, vector<int> &ans)
{
        if (root == NULL)
                return;

        // current element are processing
        if (level == ans.size())
        {
                ans.push_back(root->data);
        }

        // call the recursion right side on sub tree
        rightView(root->right, level + 1, ans);

        // call the recursion left side on sub tree
        rightView(root->left, level + 1, ans);
}

int main()
{
        Node *root = buildTree();

        int level = 0;
        vector<int> ans;
        rightView(root, level, ans);

        for (auto i : ans)
        {
                cout << i << " ";
        }

        return 0;
}