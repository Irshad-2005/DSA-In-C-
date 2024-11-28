#include <iostream>
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
Node* reverseUsingRecursion(Node* &curr, Node* &prev)
{
        // base case
          if(curr == NULL)
          {
                return prev;
          }

          Node *temp = curr->next;
          curr->next = prev;
          prev = curr;
          curr = temp;
          reverseUsingRecursion(temp,prev);
}
Node* reverseLoop(Node* &curr, Node* &prev)
{
      
        while(curr != NULL)
        {
                Node* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
        }
        return prev;
}
void printLL(Node *&head)
{
        Node *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int main()
{
        Node *head = NULL;
        Node *tail = NULL;
        insertAtHead(10,head,tail);
        insertAtHead(20,head,tail);
        insertAtHead(30,head,tail);
        insertAtHead(40,head,tail);
        insertAtHead(50,head,tail);
        insertAtHead(60,head,tail);
        insertAtHead(70,head,tail);
        printLL(head);
        cout<<endl;
        Node* prev = NULL;
        Node* curr = head;

        //Node* newNode = reverseUsingRecursion(curr,prev);
        Node* newNode = reverseLoop(curr,prev);
        printLL(newNode);
        
        return 0;
}