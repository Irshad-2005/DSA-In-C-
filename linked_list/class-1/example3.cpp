#include<iostream>
using namespace std;

class Node{
        public:
         int data;
         Node* next;

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
void insertAtTail(int data,Node* &Head, Node*&Tail)
{
        // tail is empty
        if(Tail == NULL)
        {
                //create at new node
                Node* newNode = new Node(data);
                // update tail and head
                Tail = newNode;
                Head= newNode;
                return;
        }

        // tail is non empty
        //step : 1 create at new Node
        Node* newNode = new Node(data);
        // step : 2 
        Tail->next = newNode;
        //step : 3 update tail
        Tail = newNode;
}

void insertAtHead(int data, Node* &Head, Node* &Tail)
{
        // Linked List is empty
        if(Head == NULL)
        {
                Node* newNode = new Node(data);
                Head = newNode;
                Tail = newNode;
                return;
        }

        // Linked List is Non-empty

        //step : 1 create at new Node
        Node* newNode = new Node(data);
        // step : 2 newNode ke next ko head pe pointer karwa do
        newNode->next = Head;
        //step : 3 update Head
        Head = newNode;
}
void print(Node * & Head)
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
        Node* Head = NULL;
        Node* Tail = NULL;

        insertAtTail(10,Head,Tail);
        insertAtTail(8,Head,Tail);
        insertAtTail(6,Head,Tail);
        insertAtTail(5,Head,Tail);
        insertAtTail(3,Head,Tail);
        insertAtTail(2,Head,Tail);

        insertAtHead(20,Head,Tail);
        insertAtHead(30,Head,Tail);
        insertAtHead(40,Head,Tail);
        insertAtHead(50,Head,Tail);

        print(Head);
        
        return 0;
}