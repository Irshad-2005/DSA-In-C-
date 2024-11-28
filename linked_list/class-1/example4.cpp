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
        int i = 0;
        // find prev position 
        Node* prev = Head;
        while(i< position - 1)
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
        insertAtPosition(55,2,Head,Tail);
        cout<<"After Printing L.L"<<endl;
        print(Head);
       //cout<<Head->data<<endl;
        
        return 0;
}

