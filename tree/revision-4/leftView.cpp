// left view and right view print using level order traversal
#include <iostream>
#include <queue>
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

	cout << "Enter the value of left side sub tree : " << data << endl;
	root->left = buildTree();

	cout << "Enter the value od right side sub tree : " << data << endl;
	root->right = buildTree();

	return root;
}

void leftViewLevelOrder(Node *root, int level, map<int, int> &mapping)
{
	queue<pair<Node *, int>> q;
	q.push(make_pair(root, level));

	if (root == NULL)
	{
		return;
	}

	while (!q.empty())
	{
		pair<Node *, int> Temp = q.front();
		q.pop();

		if (mapping.find(Temp.second) == mapping.end())
		{
			mapping[Temp.second] = Temp.first->data;
		}

		if (Temp.first != NULL)
		{

			if (Temp.first->left != NULL)
			{
				q.push(make_pair(Temp.first->left, Temp.second + 1));
			}
			if (Temp.first->right != NULL)
			{
				q.push(make_pair(Temp.first->right, Temp.second + 1));
			}
		}
	}
}

void rightViewLevelOrder(Node *root, int level, map<int, int> &mapping)
{
	queue<pair<Node *, int>> q;
	q.push(make_pair(root, level));

	if (root == NULL)
		return;

	while (!q.empty())
	{
		pair<Node *, int> temp = q.front();
		q.pop();

		if (mapping.find(temp.second) == mapping.end())
		{
			mapping[temp.second] = temp.first->data;
		}

		if (temp.first != NULL)
		{
			if (temp.first->right != NULL)
			{
				q.push(make_pair(temp.first->right, temp.second + 1));
			}
			if (temp.first->left != NULL)
			{
				q.push(make_pair(temp.first->left, temp.second + 1));
			}
		}
	}
}
int main()
{
	Node *root = NULL;
	root = buildTree();

	map<int, int> mapping;
	int level = 0;

	// leftViewLevelOrder(root, level, mapping);
	rightViewLevelOrder(root, level, mapping);

	for (auto i : mapping)
	{
		cout << i.first << " - " << i.second << endl;
	}

	return 0;
}