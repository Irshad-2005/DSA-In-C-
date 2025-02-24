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

        cout << "Enter the value of left side on tree : " << data << endl;
        root->left = buildTree();
        cout << "Enter the value of right side on tree : " << data << endl;
        root->right = buildTree();

        return root;
}

void topViewOnTree(Node *root, int HD, map<int, int> &mapping)
{
        // base case
        if (root == NULL)
        {
                return;
        }

        // current element are process
        if (mapping.find(HD) == mapping.end())
        {
                // element are not present in map
                mapping[HD] = root->data;
        }

        // call the recursion on left side
        topViewOnTree(root->left, HD - 1, mapping);

        // call the recursion on right side
        topViewOnTree(root->right, HD + 1, mapping);
}

int main()
{
        Node *root = NULL;
        root = buildTree();

        int HD = 0;
        map<int, int> mapping;
        topViewOnTree(root, HD, mapping);

        cout << "Print the tree to top view " << endl;

        cout << mapping.size() << endl;

        for (auto x : mapping)
        {
                cout << x.first << " - " << x.second << endl;
        }

        return 0;
}