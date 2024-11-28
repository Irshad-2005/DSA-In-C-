// check to palindrome in linked list

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
bool checkPalindrome(Node *&head)
{
        if (head == NULL)
        {
                cout << "Linked list is empty" << endl;
                return true;
        }
        if (head->next == NULL)
        {
                return true;
        }

        Node *slow = head;
        Node *fast = head->next;
        while (fast != NULL)
        {
                fast = fast->next;
                if (fast != NULL)
                {
                        fast = fast->next;
                        slow = slow->next;
                }
        }
        Node *reverseNode = reverse(slow->next);
        slow->next = reverseNode;

        Node *temp1 = head;
        Node *temp2 = reverseNode;

        while (temp2 != NULL)
        {
                if (temp1->data == temp2->data)
                {
                        temp1 = temp1->next;
                        temp2 = temp2->next;
                }
                else
                {
                        return false;
                }
        }

        return true;
}
int main()
{
        Node *first = new Node(1);
        Node *second = new Node(2);
        Node *third = new Node(30);
        Node *fourth = new Node(30);
        Node *fiveth = new Node(2);
        Node *sixth = new Node(1);

        first->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fiveth;
        fiveth->next = sixth;

        print(first);
        cout<<endl;
        Node * temp = NULL;
        bool result = checkPalindrome(first);
        cout << endl;
        cout << "result is : " << result << endl;
        cout << endl;
        return 0;
}