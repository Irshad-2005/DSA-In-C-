// Remove duplicate value in LL
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
        ~Node()
        {
                cout << "this value are delete in linked lsit : " << this->data << endl;
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
void removeDuplicate(Node *&head)
{
        if (head == NULL)
        {
                cout << "linked list are empty" << endl;
                return;
        }
        if (head->next == NULL)
        {
                cout << "single node in linked list  " << endl;
                return;
        }

        Node *curr = head;
        while (curr != NULL)
        {
                if ((curr->next != NULL) && (curr->data == curr->next->data))
                {
                        Node *temp = curr->next;
                        curr->next = curr->next->next;
                        temp->next = NULL;
                        delete temp;
                }
                else
                {
                        curr = curr->next;
                }
        }
}
int main()
{
        Node *first = new Node(10);
        Node *second = new Node(20);
        Node *third = new Node(20);
        Node *fourth = new Node(20);
        Node *fiveth = new Node(20);
        Node *sixth = new Node(20);
        Node *seventh = new Node(70);

        first->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fiveth;
        fiveth->next = sixth;
        sixth->next = seventh;

        print(first);
        cout << endl;
        cout << endl;
        Node *head = new Node(30);
        removeDuplicate(first);
        print(first);

        return 0;
}