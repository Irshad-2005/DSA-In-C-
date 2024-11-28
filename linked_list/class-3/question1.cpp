// find middle of Linked List

#include<iostream>
using namespace std;

class Node
{
       public:
          int data;
          Node* next;
          Node(int data)
          {
                this->data =data;
                this->next = NULL;
          }
};

int findMiddleLL(Node* &head)
{
        if(head == NULL)
        {
             cout<<"Please enter valid linked list"<<endl;
              return -1;
        }
        Node* slow = head;
        Node* fast = head->next;

        while(fast!=NULL)
        {
                fast = fast->next;
                if(fast!=NULL)
                {
                        fast=fast->next;
                        slow = slow->next;
                }
        }
        return slow->data;
}
void printLL(Node* &head)
{
        Node* temp = head;
        while(temp!= NULL)
        {
                cout<<temp->data<<" ";
                temp =temp->next;
        }
}
int main()
{
        Node* first = new Node(10);
        Node* second = new Node(20);
        Node* third = new Node(30);
        Node* fourth = new Node(40);
        Node* fiveth = new Node(50);
        Node* sixth = new Node(60);
        Node* seventh = new Node(70);
        Node* eigth = new Node(80);
        first->next= second;
        second->next=third;
        third->next = fourth;
        fourth->next = fiveth;
        fiveth->next = sixth;
        sixth->next  = seventh;
        seventh->next = eigth;
  
        printLL(first);
        cout<<endl;
        cout<<"Middle Node is : "<<findMiddleLL(first)<<endl;
        cout<<endl;

      return 0;
}