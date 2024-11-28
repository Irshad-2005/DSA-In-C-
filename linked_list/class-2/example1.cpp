#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *prev;
        Node *next;

        Node()
        {
                this->data = -1;
                this->prev = NULL;
                this->next = NULL;
        }
        Node(int data)
        {
                this->data = data;
                this->prev = NULL;
                this->next = NULL;
        }
        ~Node()
        {
                cout<<"Delete value : "<<this->data<<endl;
        }
};
void insertAtTail(Node *&head, Node *&tail, int data)
{
        if (tail == NULL)
        {
                Node *newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
}
int findLength(Node *&head)
{
        Node *temp = head;
        int i = 1;
        while (temp != NULL)
        {
                temp = temp->next;
                i++;
        }
        return i;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
        if (head == NULL)
        {
                Node *newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
}
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
        if (head == NULL)
        {
                // LL is empty
                Node *newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        if (position == 1)
        {
                insertAtHead(head, tail, data);
                return;
        }
        int len = findLength(head);
        if (position >= len)
        {
                insertAtTail(head, tail, data);
                return;
        }

        // LL is not empty
        int i = 1;
        Node *prevNode = head;

        while (i < position - 1 )
        {
                prevNode = prevNode->next;
                i++;
        }
        Node *curr = prevNode->next;
        Node *newNode = new Node(data);
        prevNode->next->prev = newNode;
        newNode->next = curr;
        prevNode->next = newNode;
        newNode->prev = prevNode;
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
void deleteAtPosition(Node* &head,Node* &tail, int position)
{
           if(head == NULL)
           {
                cout<<"LL is empty"<<endl;
                return;
           }
           if(position == 1)
           {
                Node* temp = head;
                head = temp->next;
                temp->next = NULL;
                delete temp;
                return;

           }
           int len = findLength(head);
           if(position == len)
           {
                cout<<"Inside "<<len<<endl;
                Node* temp = tail;
                tail = temp->prev;
                tail->next = NULL;
                temp->prev= NULL;
                delete temp;
                return;
           }
           if(position > len)
           {
                cout<<"enter valid position"<<endl;
                return;
           }
        
           
           int i = 0;
           Node* prevNode = head;
           while(i<position-1)
           {
                prevNode = prevNode->next;
                i++;
           }
           Node* curr = prevNode->next;

           prevNode->next = curr->next;
           curr->next->prev = prevNode;
           curr->next = NULL;
           delete curr;
}
int main()
{
        Node *head = NULL;
        Node *tail = NULL;
        insertAtHead(head,tail,10);
        insertAtHead(head,tail,20);
       
        cout<<endl;
        printLL(head);
        cout<<endl;
        insertAtPosition(head, tail, 80, 8);
        cout<<endl;
        printLL(head);
        cout<<endl;
        cout<<endl;
       
        deleteAtPosition(head,tail,4);
        cout<<endl;
        printLL(head);
         cout<<head->data<<endl;
        cout<<tail->data<<endl;
        return 0;
}