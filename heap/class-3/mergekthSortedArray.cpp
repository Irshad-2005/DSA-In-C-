// Merge the kth sorted array in sigle array
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    int row;
    int col;
    Node(int val, int r, int c)
    {
        data = val;
        row = r;
        col = c;
    }
};

class compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};
vector<int> mergeKthSortedArray(int arr[][4], int n, int k)
{
    // step : 1 - create a minHeap
    priority_queue<Node *, vector<Node *>, compare> minHeap;

    // step : 2 - push first element every array in minHeap
    for (int i = 0; i < k; i++)
    {
        Node *temp = new Node(arr[i][0], i, 0);
        minHeap.push(temp);
    }
    vector<int> ans;
    // step : 3 - top element nikalo or top element ko remove kro
    // step : 4 - fir array push kro uske bad check kro  current array ka next element h to minHeap me push kro

    while (!minHeap.empty())
    {
        Node *topElement = minHeap.top();
        int topData = topElement->data;
        int topRow = topElement->row;
        int topCol = topElement->col;

        minHeap.pop();

        ans.push_back(topData);

        if (topCol + 1 < n)
        {
            Node *newNode = new Node(arr[topRow][topCol + 1], topRow, topCol + 1);
            minHeap.push(newNode);
        }
    }

    return ans;
}

int main()
{
    int arr[][4] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, 11}};
    int k = 3;
    int n = 4;

    vector<int> ans = mergeKthSortedArray(arr, n, k);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}