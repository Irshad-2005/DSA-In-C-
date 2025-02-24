// left view printing are using recursion
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

void leftView(Node *root, int level, vector<int> &ans)
{
	if (root == NULL)
	{
		return;
	}

	// current element are processing
	if (level == ans.size())
	{
		ans.push_back(root->data);
	}

	// call the recursion in left side sub tree
	leftView(root->left, level + 1, ans);

	// call the recursion in right side sub tree
	leftView(root->right, level + 1, ans);
}

int main()
{
	Node *root = NULL;
	root = buildTree();

	int level = 0;
	vector<int> ans;
	leftView(root, level, ans);

	cout << "left view are printing : " << endl;

	for (auto i : ans)
	{
		cout << i << " ";
	}
	return 0;
}