// Sort 0s , 1s and 2s in linked list

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
                cout << "delete value are : " << this->data << endl
                << endl;
                ;
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
Node *sort(Node *&head)
{
        Node *curr = head;
        Node *zeroHead = new Node(-1);
        Node *zeroTail = zeroHead;
        Node *oneHead = new Node(-1);
        Node *oneTail = oneHead;
        Node *twoHead = new Node(-1);
        Node *twoTail = twoHead;

        while (curr != NULL)
        {
                if (curr->data == 0)
                {
                        Node *temp = curr;
                        curr = curr->next;
                        temp->next = NULL;
                        zeroTail->next = temp;
                        zeroTail = temp;
                }
                else if (curr->data == 1)
                {
                        Node *temp = curr;
                        curr = curr->next;
                        temp->next = NULL;
                        oneTail->next = temp;
                        oneTail = temp;
                }
                else if (curr->data == 2)
                {
                        Node *temp = curr;
                        curr = curr->next;
                        temp->next = NULL;
                        twoTail->next = temp;
                        twoTail = temp;
                }
        }

        Node *onetemp = oneHead;
        oneHead = oneHead->next;
        onetemp->next = NULL;
        delete onetemp;

        Node *twotemp = twoHead;
        twoHead = twoHead->next;
        twotemp->next = NULL;
        delete twotemp;

        if (oneHead != NULL)
        {
                zeroTail->next = oneHead;
                if (twoHead != NULL)
                {
                        oneTail->next = twoHead;
                }
        }
        else
        {
                if (twoHead != NULL)
                {
                        zeroTail->next = twoHead;
                }
        }

        Node *zerotemp = zeroHead;
        zeroHead = zeroHead->next;
        zerotemp = NULL;

        delete zerotemp;

        return zeroHead;
}
int main()
{
        Node *first = new Node(1);
        Node *second = new Node(0);
        Node *third = new Node(2);
        Node *fourth = new Node(0);
        Node *fiveth = new Node(1);

        first->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fiveth;

        print(first);
        cout << endl;
        Node *head = sort(first);

        cout << endl;
        print(head);

        return 0;
}
