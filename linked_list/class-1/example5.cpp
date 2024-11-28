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
         ~Node()
         {
                cout<<"Delete value is : "<<this->data<<endl;
             
         }
};

void insertAtHead(int data , Node* &Head, Node* &Tail)
{

        // if L.L is empty
        if(Head == NULL)
        {
                Node* newNode = new Node(data);
                Head = newNode;
                Tail = newNode;
                return;
        }
     //if L.L is non-empty
     Node* newNode = new Node(data);
     newNode->next = Head;
     Head = newNode;

}
void insertAtTail(int data, Node* &Head,Node* &Tail)
{
        // if tail is empty
        if(Tail == NULL)
        {
                Node * newNode = new Node(data);
                Head = newNode;
                Tail = newNode;
                return;
        }
        //if tail is non-empty
        //step : 1 create a newNode
        Node* newNode = new Node(data);
        //step : 2 tail point to new node
        Tail->next = newNode;
        Tail = newNode;
}
int findLen(Node* &Head)
{
        Node* temp = Head;
        int i = 0;
        while(temp != NULL)
        {
                temp = temp->next;
                i++;
        }
        return i;
}
void insertAtPosition(int data, int position, Node* &Head, Node* &Tail)
{
        // L.L is Empty
        if(Head == NULL)
        {
                Node* newNode = new Node(data);
                Head = newNode;
                Tail  = newNode;
                return;
        }

        // if position is equal 0 then call insertAtHead
        if(position == 1)
        {
                insertAtHead(data,Head,Tail);
                return;
        }
      // find length of L.L
       int len = findLen(Head);
       // if positon is grether then length to call insertAtTail
        if(position > len)
        {
                insertAtTail(data,Head,Tail);
                return;
        }

        //L.L is non-empty
        int i = 1;
        // find prev position 
        Node* prev = Head;
        while(i<position)
        {
                prev= prev->next;
                i++;
        }

        // find curr position 
        Node* curr = prev->next;

        // create at new node
        Node* newNode = new Node(data);

        newNode->next = curr;
        prev->next= newNode;
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
void DeleteAtPosition(Node* &head,Node* &tail,int position)
{
        if(head == NULL)
        {
                cout<<"LL is Empty not delete"<<endl;
                return;
        }
        int len  = findLen(head);
        if(position > len)
        {
                cout<<"Please Enter valid position"<<endl;
                return;
        }
        if(position == 1)
        {
                Node*temp = head;
                head = temp->next;
                temp->next = NULL;
                delete temp;
                return;
        }
        int i = 1;
        Node* prev = head;
        while(i<position-1)
        {
                prev= prev->next;
                i++;
        }
        Node* curr = prev->next;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;



}
int main()
{
        Node* Head = NULL;
        Node* Tail = NULL;
        insertAtHead(10,Head,Tail);
        insertAtHead(20,Head,Tail);
        insertAtHead(30,Head,Tail);
        insertAtHead(35,Head,Tail);
        insertAtHead(40,Head,Tail);
        cout<<"Before Printing L.L"<<endl;
        print(Head);
        cout<<endl;
        insertAtPosition(55,5,Head,Tail);
        cout<<"After Printing L.L"<<endl;
        print(Head);
        cout<<endl;
        cout<<endl;
       DeleteAtPosition(Head,Tail,6);
       cout<<endl;
       print(Head);
        
        return 0;
}

