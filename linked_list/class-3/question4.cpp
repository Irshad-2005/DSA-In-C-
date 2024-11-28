// find the starting point of a loop in LL

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

Node * findStartLoop(Node *&head)
{
        if(head == NULL || head->next == NULL) return NULL;

        Node *slow= head;
        Node *fast = head;
        while(fast != NULL)
        {
                fast = fast->next;
                if(fast!= NULL)
                {
                        fast = fast->next;
                        slow = slow->next;
                }
                if(fast == slow)
                {
                        slow = head;
                        break;
                }
        }
        if(fast == NULL)
        {
                cout<<"Loop is not present in linked list"<<endl;
                return NULL;
        }
        while(fast != slow)
        {
                fast = fast->next;
                slow = slow->next;
        }
        return slow;
}
void print(Node *&head)
{
        Node *temp = head;
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
        eighth->next = fourth;
     

       Node *result = findStartLoop(first);
       cout<<"Starting Loop is : "<<result->data<<endl;
        cout<<endl;

        return 0;
}