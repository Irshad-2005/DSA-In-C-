// reverse k group in linked list

#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *next;
        Node(int data)
        {
                this->data = data;
                this->next = NULL;
        }
};
void print(Node *&head)
{
        Node *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
}
int getLength(Node *&head)
{
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
                temp = temp->next;
                count++;
        }
        return count;
}
Node *reverseKGroup(Node *&head, int k)
{
        if (head == NULL)
        {
                return NULL;
        }
        int len = getLength(head);
        if (len < k)
        {
                return head;
        }

        Node *prev = NULL;
        Node *curr = head;
        Node *forward = head;
        int i = 1;
        while (i <= k)
        {
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
                i++;
        }

        if (forward != NULL)
        {
                head->next = reverseKGroup(forward, k);
        }
        return prev;
}
int main()
{
        Node *first = new Node(10);
        Node *second = new Node(20);
        Node *third = new Node(30);
        Node *fourth = new Node(40);
        Node *fiveth = new Node(50);
        Node *sixth = new Node(60);
        Node *seventh = new Node(70);
        Node *eighth = new Node(80);

        first->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fiveth;
        fiveth->next = sixth;
        sixth->next = seventh;
        seventh->next = eighth;

        cout << endl;

        print(first);
        cout << endl;
        cout << endl;
        Node *newNode = reverseKGroup(first, 5);
        cout<<"Reverse K group of linked list : "<<endl;
        cout << endl;
        print(newNode);
        return 0;
}