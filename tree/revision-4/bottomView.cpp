#include <iostream>
#include <map>
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

        cout << "Enter the value of left side in tree : " << data << endl;
        root->left = buildTree();

        cout << "Enter the value of right side in tree : " << data << endl;
        root->right = buildTree();

        return root;
}

void bottomViewOnTree(Node *root, int HD, map<int, int> &mapping)
{
        // base case
        if (root == NULL)
                return;

        // current element are processing
        mapping[HD] = root->data;

        // call the recursion on leftside sub tree
        bottomViewOnTree(root->left, HD - 1, mapping);

        // call the recursion on rightside sub tree
        bottomViewOnTree(root->right, HD + 1, mapping);
}

int main()
{
        Node *root = NULL;
        root = buildTree();

        map<int, int> mapping;
        int HD = 0;

        bottomViewOnTree(root, HD, mapping);

        for (auto i : mapping)
        {
                cout << i.first << " - " << i.second << endl;
        }

        return 0;
}