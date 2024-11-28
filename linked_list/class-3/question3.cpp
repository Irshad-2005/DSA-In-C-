// find loop is present or not in linked list
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

bool findLoopLL(Node *&head)
{
        if(head == NULL || head->next == NULL) return false;

        Node* slow = head;
        Node*fast= head;
        while(fast!= NULL)
        {
                fast = fast->next;
                if(fast!= NULL)
                {
                        fast = fast->next;
                        slow  = slow->next;
                }
                if(fast == slow)
                {
                        return true;
                }
        }

        return false;
  
}

int main()

{
        Node*head = NULL;
        Node *first = new Node(10);
        Node *second = new Node(20);
        Node *third = new Node(30);
        Node *fourth = new Node(40);
        Node *fiveth = new Node(50);
        Node *sixth = new Node(60);
        Node *seventh = new Node(70);
        Node *eighth = new Node(80);
        Node *nineth = new Node(90);
        

        first->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fiveth;
        fiveth->next = sixth;
        sixth->next = seventh;
        seventh->next = eighth;
        eighth->next = nineth;
        nineth->next = NULL;
       
        bool result = findLoopLL(first);
        
        cout << "Loop is : " << result << endl;
        cout << endl;
        return 0;
}