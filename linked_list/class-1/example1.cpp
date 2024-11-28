#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *next;
        Node()
        {
                this->data = -1;
                this->next = NULL;
                cout << "Node Called Class" << endl;
        }
        Node(int data)
        {
                this->data = data;
                this->next = NULL;
        }
};
void printLL(Node* Head)
{
        Node* temp = Head;

        while(temp != NULL)
        {
                cout<<temp->data<<" ";

                temp = temp->next;
        }
}
int main()
{
        Node *first = new Node(10);
        Node *second = new Node(20);
        Node *third = new Node(30);
        Node *fourth = new Node(40);

        first->next = second;
        second->next = third;
        third->next = fourth;
        
        printLL(first);

        return 0;
}