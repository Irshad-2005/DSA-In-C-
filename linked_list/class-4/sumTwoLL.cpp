// add to linked list and find sum

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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = head->next;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
Node *sumTwoLL(Node *&temp1, Node *&temp2)
{
    Node *head1 = reverse(temp1);
    Node *head2 = reverse(temp2);

    Node *ansHead = NULL;
    Node *ansTail = NULL;
    int carry = 0;
    while ((head1 != NULL) && (head2 != NULL))
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);

        if (ansHead == NULL)
        {
            ansHead = newNode;
            ansTail = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum / 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }
    while(carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum /10;
        Node *newNode = new Node(digit);
        ansTail->next  = newNode;
        ansTail  = newNode;

    }
    Node *result = reverse(ansHead);
    return result;
}
int main()
{
    Node *head1 = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    head1->next = second;
    second->next = third;

    Node *head2 = new Node(4);
    Node *second2 = new Node(5);
     Node *third2 = new Node(6);
    head2->next = second2;
    second2->next = third2;

    print(head1);

    cout << endl;
    print(head2);
    cout << endl;
    Node *result = sumTwoLL(head1, head2);
    cout << "sum is : ";
    print(result);
    return 0;
}
