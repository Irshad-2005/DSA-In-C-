//*InsertAtHead In Linked List

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
        }

        Node(int data)
        {
                this->data = data;
                this->next = NULL;
        }
};

void insertAtHead(int data, Node *&Head)
{
        // new Node create

        Node *newNode = new Node(data);

        // newNode ke next ko Head se point karwa de

        newNode->next = Head;

        // Head ko update kar de newNode se

        Head = newNode;
}

void printLL(Node *&Head)
{
        // create temp pointer
        Node *temp = Head;

        //  check kr le temp pointer NULL ko Point nhi na kr raha h
        while (temp != NULL)
        {
                // temp ke data ko print kra le
                cout << temp->data << " ";

                // temp ko aage badha de

                temp = temp->next;
        }
}

int main()
{
        Node *Head = NULL;
        insertAtHead(20, Head);
        insertAtHead(40, Head);
        insertAtHead(50, Head);

        printLL(Head);

        return 0;
}